/**
 * operators.h
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#ifndef OPERATORS_H
#define OPERATORS_H

/**
 * Variable Bounds
 */
template<int LOW, int HIGH>
struct BOUNDS
{
    enum { LOWER  = LOW };
    enum { HIGHER = HIGH };

    static inline void check(int x)
    {
        if (x < LOW || x > HIGH)
        {
            throw "x out of bounds!";
        }
    };
};

/**
 * Single variable X
 */
template<class BOUNDS>
struct X
{
    enum { LOWER  = BOUNDS::LOWER };
    enum { HIGHER = BOUNDS::HIGHER };

    static inline int eval(int* x)
    {
        int i = x[++x[0]];

        BOUNDS::check(i);

        return i; 
    };
};

/**
 * Integer Literal
 */
template<int V>
struct LIT
{
    enum { LOWER  = V };
    enum { HIGHER = V };

    static inline int eval(int* x)
    {
        return (int)V;
    };
};

/**
 * Addition expression
 */
template<class A, class B>
struct ADD
{
    enum { LOWER  = A::LOWER + B::LOWER };
    enum { HIGHER = A::HIGHER + B::HIGHER };

    static inline int eval(int* x)
    {
        return A::eval(x) + B::eval(x);
    };
};

/**
 * Substraction expression
 */
template<class A, class B>
struct SUB
{
    enum { LOWER  = A::LOWER - B::HIGHER };
    enum { HIGHER = A::HIGHER - B::LOWER };

    static inline int eval(int* x)
    {
        return A::eval(x) - B::eval(x);
    };
};

/**
 * Multiplication expression
 */
template <class A, class B>
struct MUL 
{
    enum { LOWER  = A::LOWER * B::LOWER };
    enum { HIGHER = B::HIGHER * B::HIGHER };

    static inline int eval(int* x)
    {
        return A::eval(x) * B::eval(x);
    };
};

/**
 * Division expression
 */
template<class A, class B>
struct DIV
{
    enum { LOWER  = A::LOWER / A::HIGHER };
    enum { HIGHER = A::HIGHER / B::LOWER };

    static inline int eval(int* x)
    {
        return A::eval(x) / B::eval(x);
    };
};


#endif

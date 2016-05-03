/**
 * operators.h
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#ifndef OPERATORS_H
#define OPERATORS_H

/**
 * Single variable X
 */
struct X
{
    static inline int eval(int x)
    {
        return x; 
    };
};

/**
 * Integer Literal
 */
template<int V>
struct LIT
{
    static inline int eval(int x)
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
    static inline int eval(int x)
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
    static inline int eval(int x)
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
    static inline int eval(int x)
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
    static inline int eval(int x)
    {
        return A::eval(x) / B::eval(x);
    };
};


#endif

/**
 * Part 2 Example script
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#include <stdio.h>
#include <operators.hpp>

int main()
{
    typedef X< BOUNDS< 0 , 20 > > VAR;

    // Random Equation: (x + 4)(x - 7)
    MUL< ADD< VAR , LIT<4> > , SUB< VAR , LIT<7> > > eq;

    printf("Given Bounds: 0, 20\n");
    printf("Calculated Bounds: %d, %d\n", eq.LOWER, eq.HIGHER);

    printf("Trying x = 4, expecting success... ");
    try
    {
        ;
        printf("[Success] eval() returned: %d\n", eq.eval(4));
    }
    catch (char const* err)
    {
        printf("[Error!] Failed with msg: '%s'\n", err);
    }

    printf("Trying x = -2, expecting failure... ");
    try
    {
        printf("[Error!] eval() returned: %d\n", eq.eval(-2));
    }
    catch (char const* err)
    {
        printf("[Success] Failed with msg: '%s'\n", err);
    }

    printf("Trying x = 30, expecting failure... ");
    try
    {
        printf("[Error!] eval() returned: %d\n", eq.eval(30));
    }
    catch (char const* err)
    {
        printf("[Success] Failed with msg: '%s'\n", err);
    }
}   



/**
 * Part 1 Example script
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#include <stdio.h>
#include <operators.hpp>

int main()
{
    // Random Equation: (x + 4)(x - 7)
    MUL< ADD< X, LIT<4> > , SUB< X , LIT<7> > > eq;
    printf("Test (x + 4)(x - 7)\n");
    printf("x = %d. Output = %d\n", 4, eq.eval(4));
    printf("x = %d. Output = %d\n", -10, eq.eval(-10));
    printf("x = %d. Output = %d\n", 6, eq.eval(6));
    printf("x = %d. Output = %d\n", 1, eq.eval(1));
}


/**
 * Part 1 Example script
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#include <stdio.h>
#include <operators.hpp>

int main()
{
    // Random Factorial: (x + 4)(x - 7)
    MUL< ADD< X, LIT<4> > , SUB< X , LIT<7> > > factorial;
    printf("Test (x + 4)(x - 7)\n");
    printf("x = %d. Output = %d\n", 4, factorial.eval(4));
    printf("x = %d. Output = %d\n", -10, factorial.eval(-10));
    printf("x = %d. Output = %d\n", 6, factorial.eval(6));
    printf("x = %d. Output = %d\n", 1, factorial.eval(1));
}


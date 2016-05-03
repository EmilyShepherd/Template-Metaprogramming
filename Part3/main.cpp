/**
 * Part 2 Example script
 *
 * @author Emily Shepherd <ams2g11@ecs.soton.ac.uk>
 */

#include <stdio.h>
#include <operators.hpp>

int main()
{
    typedef X< BOUNDS<-100, 100> > VAR; 
    MUL< MUL< MUL< ADD< VAR , LIT<1> > , VAR > , VAR > , VAR > eq;
    
    int* outputs = new int[4]
    {
        eq.eval(new int[5] {0, 4, 4, 3, 2}),
        eq.eval(new int[5] {0, 2, 46, 7, -8}),
        eq.eval(new int[5] {0, -1, 3, 4, 5}),
        eq.eval(new int[5] {0, 5, 7, 45, 2})
    };

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", outputs[i]);
    }
}



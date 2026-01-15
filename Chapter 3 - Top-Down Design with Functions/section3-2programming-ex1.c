/*
    Write statements that compute and display the absolute difference of two type
    double variables, x and y (|x − y|).
*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    double diff = 0;
    double x    = 0;
    double y    = 0;

    /*  Read input  */
    printf("Enter two values to calculate absolute difference>\n");
    scanf("%lf""%lf", &x, &y);
    
    /*  Compute absolute difference  */
    diff = abs(x - y);
    
    /*  Display the absolute difference  */
    printf("Absolute difference |%.1f - %.1f| = %.1f\n", x, y, diff);

    return 0;
}
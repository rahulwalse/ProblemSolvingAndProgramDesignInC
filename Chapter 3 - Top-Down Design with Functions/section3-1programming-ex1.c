/*
    Add refinements to the program outline that follows and write the final C program.
    Compute the sum and average of two numbers.
*/

#include <stdio.h>

int main()
{
    double one = 0;
    double two = 0;
    double sum = 0;
    double average = 0;

    /*  Read two numbers  */
    printf("\nEnter two numbers> ");
    scanf("%lf""%lf", &one, &two);

    /*  Compute sum  */
    sum = one + two;
    /*  Compute average  */
    average = (one + two ) / 2.0;

    /*  Display output  */
    printf("\nSum & average of two numbers %.2f & %.2f ", one, two);
    printf("is %.2f & %.2f respectively.", sum, average);

    return 0;
}
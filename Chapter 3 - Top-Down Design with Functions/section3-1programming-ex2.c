/*
    Write a complete C program for Self-Check Exercise 1.
    
    Self-Check Exercise 1
        Describe the problem inputs and outputs and write the algorithm for
        a program that computes an employee’s gross salary given the hours
        worked and the hourly rate.
*/

#include <stdio.h>

int main()
{
    /*  Problem input  */
    double hours_worked = 0;
    double hourly_rate = 0;

    /*  Problem output  */
    double gross_salary = 0;

    /*  Read input  */
    printf("\nEnter hours worked> ");
    scanf("%lf", &hours_worked);
    printf("\nEnter hourly rate> ");
    scanf("%lf", &hourly_rate);

    /*  Compute gross salary  */
    gross_salary = hours_worked * hourly_rate;

    /*  Display output  */
    printf("\n$%.2f is gross salary of employee who worked %.2f hrs ", gross_salary, hours_worked);
    printf("at an hourly rate of $%.2f.", hourly_rate);

    return 0;
}
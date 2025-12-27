/*
    Write a complete C program for the revised payroll algorithm developed in
    Self-Check Exercise 3.

    Self-Check Exercise 3:
        In computing gross salary, what changes should you make to extend the payroll
        algorithm in Self-Check Exercise 1 to include overtime hours to be paid at
        1.5 times an employee’s normal hourly rate? Assume that overtime hours are
        entered separately.
*/

#include <stdio.h>

int main()
{
    /*  Problem input  */
    double hours_worked = 0;
    double hourly_rate = 0;
    double overtime_hours = 0;    

    /*  Problem output  */
    double gross_salary = 0;

    /*  Program variables  */
    double overtime_earnings = 0;
    double overtime_rate = 0;

    /*  Read input  */
    printf("\nEnter hours worked> ");
    scanf("%lf", &hours_worked);
    printf("Enter hourly rate> ");
    scanf("%lf", &hourly_rate);
    printf("Enter overtime hours> ");
    scanf("%lf", &overtime_hours);

    /*  Compute overtime rate  */
    overtime_rate = hourly_rate * 1.5;
    /*  Compute overtime earnings  */
    overtime_earnings = overtime_hours * overtime_rate;
    /*  Compute gross salary  */
    gross_salary = (hours_worked * hourly_rate) + overtime_earnings;

    /*  Display output  */
    printf("\n$%.2f is gross salary of employee who worked %.1f hrs ", gross_salary, hours_worked);
    printf("at an hourly rate of $%.2f including additional earnings ", hourly_rate);
    printf("of $%.2f for overtime of %.1f hrs.", overtime_earnings, overtime_hours);

    return 0;
}
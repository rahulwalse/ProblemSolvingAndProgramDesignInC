/*
    Write a program that calculates mileage reimbursement for a salesperson at
    a rate of $.35 per mile. Your program should interact with the user in this
    manner:
    MILEAGE REIMBURSEMENT CALCULATOR
    Enter beginning odometer reading=> 13505.2
    Enter ending odometer reading=> 13810.6
    You traveled 305.4 miles. At $0.35 per mile,
    your reimbursement is $106.89.
*/

#include <stdio.h>

#define RATE 0.35

int main()
{
    double begin_odometer_reading = 0;
    double end_odometer_reading = 0;
    double travelled_miles = 0;
    double reimbursement = 0;

    printf("MILEAGE REIMBURSEMENT CALCULATOR");
    printf("\nEnter beginning odometer reading=> ");
    scanf("%lf", &begin_odometer_reading);
    printf("Enter ending odometer reading=> ");
    scanf("%lf", &end_odometer_reading);

    /*  Calculate miles travelled and reimbursement */
    travelled_miles = end_odometer_reading - begin_odometer_reading;
    reimbursement = travelled_miles * RATE;
    
    printf("You traveled %.2lf miles. At $%.2lf per mile,\n", travelled_miles, RATE);
    printf("your reimbursement is $%.2lf", reimbursement);

    return 0;
}
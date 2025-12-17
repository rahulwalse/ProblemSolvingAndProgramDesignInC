/*
    Write a program that estimates the temperature in a freezer (in °C) given the
    elapsed time (hours) since a power failure. Assume this temperature (T) is
    given by
    T = (4t^2 / t + 2) - 20

    where t is the time since the power failure. Your program should prompt the
    user to enter how long it has been since the start of the power failure in whole
    hours and minutes. Note that you will need to convert the elapsed time into
    hours. For example, if the user entered 2 30 (2 hours 30 minutes), you would
    need to convert this to 2.5 hours.
*/

#include <stdio.h>

int main()
{
    int hours = 0;
    int minutes = 0;
    double elapsed_time = 0;
    double temperature = 0;

    printf("\nEnter the time in hours and minutes since power failure> ");
    scanf("%d""%d", &hours, &minutes);

    /*  Convert hours and minutes into hours  */
    elapsed_time = hours + ((double) minutes / 60.0);
    /*  Calculate the temperature of freezer  */
    temperature = ((4 * elapsed_time * elapsed_time) / elapsed_time + 2) - 20;

    printf("\nFor power failure since %.2f hours, ", elapsed_time);
    printf("the approximate temperature inside freezer is %.2f celsius", temperature);

    return 0;
}
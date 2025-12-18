/*
    Hospitals use programmable pumps to deliver medications and fluids to intravenous
    lines at a set number of milliliters per hour. Write a program to output
    information for the labels the hospital pharmacy places on bags of I.V. medications
    indicating the volume of medication to be infused and the rate at which the
    pump should be set. The program should prompt the user to enter the quantity
    of fluid in the bag and the number of minutes over which it should be infused.
    Output the VTBI (volume to be infused) in ml and the infusion rate in ml/hr.

    Sample run:
    Volume to be infused (ml) => 100
    Minutes over which to infuse => 20
    VTBI: 100 ml
    Rate: 300 ml/hr
*/

#include <stdio.h>

int main()
{
    int vtbi = 0;
    int minutes = 0;
    double rate = 0;

    printf("\nVolume to be infused (ml)> ");
    scanf("%d", &vtbi);
    printf("Minutes over which to infuse> ");
    scanf("%d", &minutes);

    /*  Calculate the rate of infusion per hour  */
    rate = ((double) vtbi / minutes) * 60;

    printf("\nVTBI: %d ml\nRate: %.2f ml/hr", vtbi, rate);

    return 0;
}
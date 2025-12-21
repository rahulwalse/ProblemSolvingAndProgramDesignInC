/*
    Write a program that calculates how many BTUs of heat are delivered to a
    house given the number of gallons of oil burned and the efficiency of the
    house’s oil furnace. Assume that a barrel of oil (42 gallons) has an energy
    equivalent of 5,800,000 BTU. (Note: This number is too large to represent as an
    int on some personal computers.) For one test use an efficiency of 65 percent
    and 100 gallons of oil.
*/

#include <stdio.h>

#define BTUS_PER_BARREL     5800000.0
#define GALLONS_PER_BARREL  42.0

int main()
{
    /*  Problem input  */
    double efficiency = 0;
    double oil_in_gallons = 0;

    /*  Problem output  */
    double btus_of_heat = 0;
    double btus_per_gallon = 0;

    /*  Read input  */
    printf("\nEnter efficiency of furnace as percent> ");
    scanf("%lf", &efficiency);
    printf("Enter gallons of oil burned> ");
    scanf("%lf", &oil_in_gallons);

    /*  Calculate BTU per gallon of oil  */
    btus_per_gallon = BTUS_PER_BARREL / GALLONS_PER_BARREL;
    /*  Calculate BTUs of heat for oil burned  */
    btus_of_heat = btus_per_gallon * oil_in_gallons * (efficiency / 100);

    /*  Display output  */
    printf("\n%.2f BTUs of heat is delivered for %.1f ", btus_of_heat, oil_in_gallons);
    printf("gallons of oil burned at %.2f percent efficiency.", efficiency);

    return 0;
}
/*
    Metro City Planners proposes that a community conserve its water supply by
    replacing all the community’s toilets with low-flush models that use only 2
    liters per flush. Assume that there is about 1 toilet for every 3 persons, that
    existing toilets use an average of 15 liters per flush, that a toilet is flushed on
    average 14 times per day, and that the cost to install each new toilet is $150.
    Write a program that would estimate the magnitude (liters/day) and cost of the
    water saved based on the community’s population.
*/

#include <stdio.h>

#define DAILY_FLUSH             14
#define NEW_LITERS_PER_FLUSH    2.0
#define OLD_LITERS_PER_FLUSH    15.0
#define RATIO                   3
#define TOILET_COST             150

int main()
{
    /*  Problem input  */
    int population = 0;
    int number_of_toilets = 0;
    double old_daily_usage = 0;
    double new_daily_usage = 0;

    /*  Problem output  */
    double installation_cost = 0;
    double water_saved = 0;

    /*  Read the input  */
    printf("\nEnter the community's population> ");
    scanf("%d", &population);

    /*  Calculate number of toilets  */
    number_of_toilets = population / RATIO;
    /*  Calculate liters per day with existing toilets  */
    old_daily_usage = number_of_toilets * OLD_LITERS_PER_FLUSH * DAILY_FLUSH;
    /*  Calculate liters per day with new low-flush toilets  */
    new_daily_usage = number_of_toilets * NEW_LITERS_PER_FLUSH * DAILY_FLUSH;
    /*  Calculate water saved  */
    water_saved = old_daily_usage - new_daily_usage;
    /*  Calculate cost of new toilet installation  */
    installation_cost = number_of_toilets * TOILET_COST;
    
    /*  Display output  */
    printf("\nFor community of %d people, %.2f ltrs would be saved per day ", population, water_saved);
    printf("by installing new low-flush toilets at the cost of $%.2f.", installation_cost);

    return 0;
}
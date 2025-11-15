/*
    CASE STUDY: Supermarket Coin Processor
    You are drafting software for the machines placed at the front of supermarkets to
    convert change to personalized credit slips. In this draft, the user will manually
    enter the number of each kind of coin in the collection, but in the final version,
    these counts will be provided by code that interfaces with the counting devices in
    the machine.
*/
#include <stdio.h>

int main()
{
    char first, middle, last;
    int dollars;
    int quarters;
    int dimes;
    int nickels;
    int pennies;
    int total_dollars;
    int total_cents;
    int change;

    printf("Type in your 3 initials and press return>");
    scanf("%c%c%c", &first, &middle, &last);
    printf("\n%c%c%c, please enter coin details you have\n", first, middle, last);

    printf("Number of $ coins> ");
    scanf("%d", &dollars);
    printf("Number of quarters> ");
    scanf("%d", &quarters);
    printf("Number of dimes> ");
    scanf("%d", &dimes);
    printf("Number of nickels> ");
    scanf("%d", &nickels);
    printf("Number of pennies> ");
    scanf("%d", &pennies);

    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    total_dollars = total_cents / 100;
    change = total_cents % 100;

    printf("%c%c%c Coin Credit\nDollars: %d\nChange: %d\n", first, middle, last, total_dollars, change);

    return 0;
}
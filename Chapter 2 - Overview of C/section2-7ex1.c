/*
    Rewrite the Supermarket Coin Processor program as a batch program. Assume
    that the data file will be made accessible through input redirection.
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

    scanf("%c%c%c", &first, &middle, &last);
    printf("Your initials:%c%c%c\n", first, middle, last);

    scanf("%d", &dollars);
    printf("$ coins:%d\n", dollars);
    scanf("%d", &quarters);
    printf("Quarters:%d\n", quarters);
    scanf("%d", &dimes);
    printf("Dimes:%d\n", dimes);
    scanf("%d", &nickels);
    printf("Nickels:%d\n", nickels);
    scanf("%d", &pennies);
    printf("Pennies:%d\n", pennies);

    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;
    total_dollars = total_cents / 100;
    change = total_cents % 100;

    printf("\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n", first, middle, last, total_dollars, change);

    return 0;
}
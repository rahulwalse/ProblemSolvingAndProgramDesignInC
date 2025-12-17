/*
    Write a program to convert a temperature in degrees Fahrenheit to degrees
    Celsius.
    Relevant Formula
    celsius = 5/9 (fahrenheit − 32)
*/

#include <stdio.h>

int main()
{
    int fahrenheit = 0;
    double celsius = 0;

    printf("\nEnter temperature in fahrenheit> ");
    scanf("%d", &fahrenheit);

    /*  Convert fahrenheit to celisus  */
    celsius = 5.0 / 9.0 * (fahrenheit - 32);

    printf("\n%d degree fahrenheit is equal to %.2f degree celsius.", fahrenheit, celsius);

    return 0;
}
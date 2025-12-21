/*
    Write a program that takes the length and width of a rectangular yard and the
    length and width of a rectangular house situated in the yard. Your program
    should compute the time required to cut the grass at the rate of two square
    feet a second.
*/

#include <stdio.h>

#define SQFT_PER_SECOND 2.0

int main()
{
    /*  Problem input  */
    double house_length = 0;
    double house_width = 0;
    double yard_length = 0;
    double yard_width = 0;
    double area_of_yard = 0;
    double house_area = 0;

    /*  Problem output  */
    double grass_area = 0;
    double req_time = 0;

    /*  Read inputs  */
    printf("\nEnter length and width of yard> ");
    scanf("%lf""%lf", &yard_length, &yard_width);
    printf("Enter length and width of house situated in the yard> ");
    scanf("%lf""%lf", &house_length, &house_width);

    /*  Calculate area of yard and area of house  */
    area_of_yard = yard_length * yard_width;
    house_area = house_length * house_width;
    /*  Calculate area of grass  */
    grass_area = area_of_yard - house_area;
    /*  Calculate time required to cut grass  */
    req_time = grass_area / SQFT_PER_SECOND;

    /*  Display output  */
    printf("\n%.1f seconds are required to cut the grass area of %.2f sqft ", req_time, grass_area);
    printf("at %.2f sqft per second.", SQFT_PER_SECOND);

    return 0;
}
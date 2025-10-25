/*
    Write a program that asks the user to enter the radius of a circle and then
    computes and displays the circle’s area. Use the formula
    Area = PI X Radius X Radius
    where PI is the constant macro 3.14159 .
*/

#include <stdio.h>

#define PI 3.14159

int main()
{
    double area = 0;
    double radius = 0;

    printf("Enter the radius of circle>");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("Area of circle whose radius is %f cm is %f square cm.", radius, area);

    return 0;
}
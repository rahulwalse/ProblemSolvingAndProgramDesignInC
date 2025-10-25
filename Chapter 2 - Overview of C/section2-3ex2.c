/*
    a. Write a statement that displays the following line with the value of the
    type int variable n before the period.
    The value of n is ___________.

    b. Assuming that side and area are type double variables containing the
    length of one side in cm and the area of a square in square cm, write a
    statement that will display this information in this form:
    The area of a square whose side length is ______ cm
    is ______ square cm.
*/

#include <stdio.h>

int main()
{
    int n = 12;
    printf("The value of n is %d.\n", n);

    double area = 100.0;
    double side = 10.0;
    printf("The area of a square whose side length is %f cm\nis %f square cm.", side, area);

    return 0;
}
/*
    Write a program that stores the values 'X' and 76.1 in separate memory cells.
    Your program should get the values as data items and display them again for
    the user when done.
*/

#include <stdio.h>

int main()
{
    char c = 'X';
    double d = 76.1;

    printf("%c %f", c, d);

    return 0;
}
/*
    Write a statement that asks the user to type three integers and another statement
    that stores the three user responses into first, second, and third.
*/

#include <stdio.h>

int main()
{
    int first;
    int second;
    int third;

    printf("Type three integers>");
    scanf("%d%d%d", &first, &second, &third);

    return 0;
}
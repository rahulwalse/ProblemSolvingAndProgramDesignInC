/*
    Write a program that stores the values 'A' , 'B' , 19 , and −0.42E7 in separate
    memory cells that you have declared. Use an assignment statement to store
    the first value, but get the other three values as input data from the user.
*/

#include <stdio.h>

int main()
{
    char capital_a = 'A';
    char capital_b;
    int num;
    double real_num;

    printf("Enter character %c, integer number %d and floating-point number %f>", 'B', 19, -0.42E7);
    scanf("%c%d%f", &capital_b, &num, &real_num);

    return 0;
}
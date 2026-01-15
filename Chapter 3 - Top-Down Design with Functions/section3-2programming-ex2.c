/*
    Write a complete C program that prompts the user for the coordinates of two
    3-D points (x1 , y1 , z1) and (x2 , y2 , z2) and displays the distance
    between them computed using the following formula:
    distance = √((x1 - x2)^2 + (y1 - y2)^2 + (z1 - z2)^2)
*/

#include <math.h>
#include <stdio.h>

int main()
{
    double distance = 0;
    double x1       = 0;
    double y1       = 0;
    double z1       = 0;
    double x2       = 0;
    double y2       = 0;
    double z2       = 0;

    /*  Read input  */
    printf("Enter coordinates for two 3-D points>\n");
    printf("Point #1 (x, y, z)\n");
    scanf("%lf""%lf""%lf", &x1, &y1, &z1);
    printf("Point #2 (x, y, z)\n");
    scanf("%lf""%lf""%lf", &x2, &y2, &z2);

    /*  Compute distance using formula  */
    distance = sqrt(pow(x1 - x2, 2.0F) + pow(y1 - y2, 2.0F) + pow(z1 - z2, 2.0F));

    /*  Display the distance  */
    printf("Distance between two 3-D points (%.1f, %.1f, %.1f) ", x1, y1, z1);
    printf("and (%.1f, %.1f, %.1f) is %.2f", x2, y2, z2, distance);

    return 0;
}
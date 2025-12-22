/*
    Write a program that outputs the equation of the perpendicular bisector of the
    line segment between two points. Your program should
        ■   prompt for and input the coordinates of the two points [for example,
            try the points (2.0, −4.0) and (7.0, −2.0)];

        ■   compute the slope of the line between those two points;

        ■   compute the coordinates of the midpoint of the line segment between the
            two points by averaging the two x coordinates and the two y coordinates;

        ■   compute the slope of the perpendicular bisector by taking the negative
            reciprocal of the slope of the line segment;

        ■   compute the y intercept of the perpendicular bisector (you now have
            the slope m of the bisector and a point (x mid , y mid) on the bisector,
            so the y intercept is y mid − m x mid); and

        ■   output with labels the original two points, and output in y = mx + b format
            the equation of the perpendicular bisector. Figure 2.19 illustrates the
            sample line segment mentioned above and its perpendicular bisector.

    Test your program to be sure it works on different pairs of points. However,
    there will be some pairs of points for which you can’t make your program
    work (at least not at this stage). Think about what points will cause your
    program to fail, and write a paragraph describing which points fall in this
    category.
*/

#include <stdio.h>

int main()
{
    /*  Problem input  */
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;
    double m = 0;

    /*  Read input  */
    printf("\nEnter x & y co-ordinates for two points");
    printf("\nPoint 1 (x1, y1)>\n");
    scanf("%lf""%lf", &x1, &y1);
    printf("Point 2 (x2, y2)>\n");
    scanf("%lf""%lf", &x2, &y2);

    /*  Compute slope  */
    double rise = y2 - y1;
    double run = x2 - x1;
    m = rise / run;
    /*  Compute mid point co-ordinates of line  */
    double x_mid = (x1 + x2) / 2;
    double y_mid = (y1 + y2) / 2;
    /*  Compute slope of perpendicular bisector  */
    double bisector_slope = (1 / m) * -1;
    /*  Compute y intercept of perpendicular bisector  */
    double y_intercept = y_mid - (bisector_slope * x_mid);

    /*  Display output  */
    printf("\nFor the co-ordinates (%.1f, %.1f) and (%.1f, %.1f), ", x1, y1, x2, y2);
    printf("the perpendicular bisector of line is y = %.2fx + %.2f.", bisector_slope, y_intercept);

    return 0;
}
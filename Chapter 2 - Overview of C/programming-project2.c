/*
    Write a program to assist in the design of a hydroelectric dam. Prompt
    the user for the height of the dam and for the number of cubic meters of
    water that are projected to flow from the top to the bottom of the dam each
    second. Predict how many megawatts (1MW = 10^6 W) of power will be
    produced if 90% of the work done on the water by gravity is converted to
    electrical energy. Note that the mass of one cubic meter of water is 1000 kg.
    Use 9.80 meters/second^2 as the gravitational constant g. Be sure to use
    meaningful names for both the gravitational constant and the 90% efficiency
    constant. For one run, use a height of 170 m and flow of 1.30 x 10^3 m^3 /s.
    The relevant formula (w = work, m = mass, g = gravity, h = height) is:
    w = mgh.
*/

#include <stdio.h>

#define G 9.80
#define EFFICIENCY 0.90

int main()
{
    int height = 0;
    double water_cubic_meters = 0;
    double work = 0;
    double mass = 0;
    double megawatts = 0;

    printf("\nEnter height of dam> ");
    scanf("%d", &height);
    printf("Enter number of cubic meters of water> ");
    scanf("%lf", &water_cubic_meters);

    /*  Calculate mass, work and power produced in megawatts */
    mass = water_cubic_meters * 1000.0;
    work = mass * G * height;
    megawatts = (work * EFFICIENCY) / 1000000.0;

    printf("\nThe dam of height %d m and %.3f cubic meters of water ", height, water_cubic_meters);
    printf("flowing produces %.3f MW of power with 90 percent efficiency.", megawatts);

    return 0;
}
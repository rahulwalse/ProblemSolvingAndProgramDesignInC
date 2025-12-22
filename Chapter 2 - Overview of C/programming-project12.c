/*
    Write a program that calculates the acceleration (m/s^2) of a jet fighter
    launched from an aircraft-carrier catapult, given the jet’s takeoff speed in
    km/hr and the distance (meters) over which the catapult accelerates the
    jet from rest to takeoff. Assume constant acceleration. Also calculate the
    time (seconds) for the fighter to be accelerated to takeoff speed. When
    you prompt the user, be sure to indicate the units for each input. For one
    run, use a takeoff speed of 278 km/hr and a distance of 94 meters. Relevant
    formulas (v = velocity, a = acceleration, t = time, s = distance)
            v = at
            s = (1/2) * at^2
*/

#include <stdio.h>

int main()
{
    /*  Problem input  */
    double takeoff_speed = 0;
    double distance = 0;

    /*  Read input  */
    printf("\nEnter takeoff speed (km/hr) of jet fighter> ");
    scanf("%lf", &takeoff_speed);
    printf("Enter the distance in meters for takeoff> ");
    scanf("%lf", &distance);

    /*  Convert takeoff speed from km/hr to m/s  */
    takeoff_speed = takeoff_speed * (5.0 / 18.0);
    /*  Compute time using second formula (t = 2s/v)  */
    double time = (2 * distance) / takeoff_speed;
    /*  Compute acceleration  using first formula (a = v/t)*/
    double acceleration = takeoff_speed / time;

    /*  Display output  */
    printf("\nThe jet fighter requires %.2f seconds to takeoff at an ", time);
    printf("acceleration of %.2f m/s^2.", acceleration);

    return 0;
}
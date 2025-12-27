/*
    Assume that flat washers are manufactured by stamping them out from a rectangular
    piece of material of uniform thickness. Extend the washer program to compute
    (a) the number of square centimeters of material needed to manufacture a
    specified quantity of flat washers and (b) the weight of the leftover material.
*/

#include <stdio.h>
#define PI 3.14159

int main(void)
{
    double hole_diameter;   /* input - diameter of hole */
    double edge_diameter;   /* input - diameter of outer edge */
    double thickness;       /* input - thickness of washer */
    double density;         /* input - density of material used */
    double quantity;        /* input - number of washers made */
    double weight;          /* output - weight of washer batch */
    double hole_radius;     /* radius of hole */
    double edge_radius;     /* radius of outer edge */
    double rim_area;        /* area of rim */
    double rim_volume;      /* volume of flat washer */
    double unit_weight;     /* weight of 1 washer */
    double edge_rect_area;  /* area of rectangular piece of 1 washer */
    double sheet_area;      /* area of rentangular piece for all washers */
    double sheet_volume;    /* area of rectangular piece of 1 hole */
    double leftover_weight; /* weight of the leftover material */

    /* Get the inner diameter, outer diameter, and thickness. */
    printf("Inner diameter in centimeters> ");
    scanf("%lf", &hole_diameter);
    printf("Outer diameter in centimeters> ");
    scanf("%lf", &edge_diameter);
    printf("Thickness in centimeters> ");
    scanf("%lf", &thickness);

    /* Get the material density and quantity manufactured. */
    printf("Material density in grams per cubic centimeter> ");
    scanf("%lf", &density);
    printf("Quantity in batch> ");
    scanf("%lf", &quantity);

    /* Compute the rim area. */
    hole_radius = hole_diameter / 2.0;
    edge_radius = edge_diameter / 2.0;
    rim_area = PI * edge_radius * edge_radius - PI * hole_radius * hole_radius;

    /* Compute rectangular area for flat washer. */
    edge_rect_area = edge_diameter * edge_diameter;
    sheet_area = edge_rect_area * quantity;
    /* Compute the weight of a flat washer. */
    unit_weight = rim_area * thickness * density;
    /* Compute leftover weight. */
    sheet_volume = edge_rect_area * thickness;
    rim_volume = rim_area * thickness;
    leftover_weight = (sheet_volume - rim_volume) * density * quantity;
    /* Compute the weight of the batch of washers. */
    weight = unit_weight * quantity;

    /* Display the weight of the batch of washers. */
    printf("\nThe expected weight of the batch is %.2f grams.", weight);
    printf("\n%.2f square centimeters of material is required to ", sheet_area);
    printf("manufacture %.0f flat washers", quantity);
    printf("\nThe leftover weight is %.2f grams.", leftover_weight);

    return (0);
}
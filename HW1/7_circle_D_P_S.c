#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

double diameter(double radius)
{
    return 2*radius;
}

double perimeter(double radius)
{
    return 2*pi*radius;
}

double space(double radius)
{
    return pi*radius*radius;
}

int main()
{
    double radius = 0;

    printf("Insert radius\n");
    scanf("%lf", &radius);
    printf("Radius = %f\n", radius);


    printf("Diameter = %f\n", diameter(radius));
    printf("Perimeter = %f\n", perimeter(radius));
    printf("Space = %f\n", space(radius));
    return 0;
}

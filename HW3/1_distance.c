#include <stdio.h>
#include <stdlib.h>

double distance(double x1, double y1, double x2, double y2)
{
    double dist;
    dist = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    return dist;
}

int main()
{
    double x1, x2, y1, y2, dist = 0;

    printf("Enter coordinates of the first point:\n");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates of the second point:\n");
    scanf("%lf %lf", &x2, &y2);

    dist = distance(x1,y1,x2,y2);

    printf("The distance between two entered points is equal: %f\n", dist);

    return 0;
}

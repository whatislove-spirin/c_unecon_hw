#include <stdio.h>
#include <stdlib.h>

double minimun(double a, double b, double c)
{
    if (a>b)
        if (b>c)
            return c;
        else
            return b;
    else
        if (a>c)
            return c;
        else
            return a;
}

int main()
{
    double x1=0, x2=0, x3=0;

    printf("Enter three numbers (non-integer numbers are allowed)\n");
    scanf("%lf %lf %lf", &x1, &x2, &x3);

    printf("%f is the minimum of %f, %f, %f", minimun(x1, x2, x3), x1, x2, x3);

    return 0;
}

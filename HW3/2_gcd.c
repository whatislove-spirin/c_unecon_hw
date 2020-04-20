#include <stdio.h>
#include <stdlib.h>

int gcd(int x1, int x2)
{
    int t=0, a = x1, b = x2;
    while (b > 0)
    {
        t = a % b;
        a = b;
        b = t;
    }

    return a;
}

int main()
{
    int a=0, b=0;

    printf("Enter two integer numbers:\n");
    scanf("%d %d", &a, &b);

    printf("GCD of %d and %d is equal: %d", a, b, gcd(a, b));

    return 0;
}

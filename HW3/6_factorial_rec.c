#include <stdio.h>
#include <stdlib.h>

int factorial(int x)
{
    if (x==1 || x==0)
    return 1;
    else
    return x*factorial(x-1);
}

int main()
{
    int x=0, fact=0;

    printf("Enter non-negative integer number\n");
    scanf("%d", &x);

    printf("Factorial of %d is equal %d", x, factorial(x));

    return 0;
}

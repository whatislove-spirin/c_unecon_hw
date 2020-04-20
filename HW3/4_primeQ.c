#include <stdio.h>
#include <stdlib.h>

int primeQ(int x)
{
    int i=2, k=0;
    if (x==2)
    return 0;
    else
    {
        while (i<=sqrt(x))
        {
            if (x%i==0)
            k++;

            i++;
        }
        return k;
    }
}


int main()
{
    int x=0;

    printf("Enter your integer positive number\n");
    scanf("%d", &x);

    if (primeQ(x)==0)
    printf("%d is a prime number\n", x);
    else
    printf("%d is not a prime number\n", x);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float eX=1, summand=1;
    int X, i=1;
    printf("Insert your positive X to calculate e^X\n");
    scanf("%d",&X);

    while (i<100)
    {
        summand = summand*X/i;
        eX += summand;
        i++;
    }
    printf("e^%d is approximately %f\n",X,eX);
    return 0;
}

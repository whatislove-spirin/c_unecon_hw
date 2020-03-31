#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, i, numsum;
    float average;

    number = 0;
    numsum = 0;
    i=1;

    while(i<=5)
    {
        scanf("%d", &number);
        numsum += number;
        i+=1;
    };
    average = numsum/5;
    printf("%f",average);
    return 0;
}

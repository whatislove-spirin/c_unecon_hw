#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int a[N] = {0};
    int i = 0, counter = 1;
    srand(time(NULL));


    printf("Initial array:\n");
    while (i < N)
    {
        a[i] = rand()%20;
        printf("%d ", a[i]);
        i++;
    }
    i = 0;

    while (i < N-1)
    {
        if (a[i]%2 != a[i+1]%2)
        counter++;
        i++;
    }
    i = 0;

    if (N == counter)
    printf("\n\nOdd and even elements in initial array are alternating");
    else
    printf("\n\nOdd and even elements in initial array are not alternating");

    return 0;
}

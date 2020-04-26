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
        a[i] = rand()%N;
        printf("%d ", a[i]);
        i++;
    }
    i = 0;

    while (i < N-1)
    {
        if (a[i] <= a[i+1])
        counter++;
        i++;
    }
    i = 0;

    if (N == counter)
    printf("\n\nInitial array is ordered");
    else
    printf("\n\nInitial array is not ordered");


    return 0;
}

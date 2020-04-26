#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 11

int main()
{
    int A[N] = {0};
    int i_min = 0, i_max = 0, i = 0, temp = 0, sum = 0;
    srand(time(NULL));

    printf("Initial array:\n");

    while (i<N)
    {
        A[i] = rand()%20;
        printf("%d ", A[i]);
        i++;
    }
    i = 0;


    while (i<N)
    {
        if (A[i] < A[i_min])
        i_min = i;

        if (A[i] > A[i_max])
        i_max = i;

        i++;
    }
    i=0;

    if (i_min < i_max)
    {
        i = i_min+1;
        while (i < i_max)
        {
            sum += A[i];
            i++;
        }
    i = 0;
    printf("\n\nSum of elements between indexes %d and %d is equal %d", i_min, i_max, sum);
    }

    if (i_min >= i_max)
    {
        i = i_max+1;
        while (i < i_min)
        {
            sum += A[i];
            i++;
        }
    i = 0;
    printf("\n\nSum of elements between indexes %d and %d is equal %d", i_max, i_min, sum);
    }

    return 0;
}

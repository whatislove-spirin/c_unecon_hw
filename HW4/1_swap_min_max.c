#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int A[N] = {0};
    int i_min = 0, i_max = 0, i = 0, temp = 0;
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

    temp = A[i_min];
    A[i_min] = A[i_max];
    A[i_max] = temp;

    temp = 0;

    printf("\n\nArray with swapped min and max:\n");

    while (i<N)
    {
        printf("%d ", A[i]);
        i++;
    }
    i=0;


    return 0;
}

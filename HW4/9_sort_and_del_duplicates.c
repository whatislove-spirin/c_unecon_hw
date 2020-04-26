#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int a[N] = {0};
    int i = 0, j = 0, counter = 0, temp = 0;
    srand(time(NULL));

    int size_a = sizeof a / sizeof a[0];

    int b[size_a];

    printf("Initial array a:\n");

    for (i = 0; i <size_a; i++)
    {
        a[i] = rand()%N;
        printf("%d ", a[i]);
    }

    for (i = 0; i < size_a; i++)
    {
        for (j = i+1; j < size_a; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }

    for (i = 0; i < size_a; i++)
    {
        if (a[i] != a[i - 1])
        {
            counter++;
            b[counter - 1] = a[i];
        }
    }

    printf("\n\nInitial array a, but sorted and with duplicates being removed:\n");

    for (i=0; i < counter; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

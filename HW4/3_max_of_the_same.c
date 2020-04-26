#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 15

int main()
{
    int a[N] = {0}, counter[N] = {0};
    int i = 0, i_max = 0, t = 0;
    srand(time(NULL));

    printf("Initial array:\n");
    while (i < N)
    {
        a[i] = rand()%N;
        printf("%d ", a[i]);
        i++;
    }
    i = 0;

    while (i < N)
    {
        counter[a[i]]++;
        i++;
    }
    i = 0;

    while (i < N)
    {
        if (counter[i] > counter[i_max])
        i_max = i;

        i++;
    }

    printf("\n\nMax number of the same elements (%d) is %d", i_max, counter[i_max]);
    return 0;
}

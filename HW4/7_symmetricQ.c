#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main()
{
    int a[N] = {1, 2, 3, 2, 1};
    int i = 0, counter = 0;
    srand(time(NULL));

    printf("Initial array:\n");
    while (i < N)
    {
        /*a[i] = rand()%20;*/
        printf("%d ", a[i]);
        i++;
    }
    i = 0;

    while (i < N/2)
    {
        if (a[i] == a[N-i-1])
        counter ++;

        i++;
    }




    if (counter == N/2)
    printf("\n\nInitial row is symmetric");
    else
    printf("\n\nInitial row is not symmetric");

    return 0;
}

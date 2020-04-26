#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int a[N] = {0};
    int i = 0, i_dif = 0;
    double r = 0, dif = 0;
    srand(time(NULL));

    printf("Enter r:\n");
    scanf("%lf", &r);

    printf("Initial array:\n");

    while (i<N)
    {
        a[i] = rand()%20;
        printf("%d ", a[i]);
        i++;
    }
    i = 0;

    dif = fabs(a[0] - r);
    i_dif=0;

    while (i<N)
    {
        if (fabs(a[i] - r) < dif)
        {
            dif = fabs(a[i]-r);
            i_dif = i;
        }
        i++;
    }

    printf("\n\nClosest element to %f is %d (difference = %f, index = %d)\n", r, a[i_dif], dif, i_dif);

    return 0;
}

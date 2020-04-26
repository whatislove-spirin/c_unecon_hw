#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a[] = {1, 1, 3, 4};
    int b[] = {0, 1, 2, 2};
    int counter = 0, i = 0, j = 0, k = 0, comp = 0;
    srand(time(NULL));


    printf("Array a:\n");

    int size_a = sizeof a / sizeof a[0];

    while (i < size_a)
    {
        printf("%d ", a[i]);
        i++;
    }
    i = 0;


    printf("\n\nArray b:\n");

    int size_b = sizeof b / sizeof b[0];

    while (i < size_b)
    {
        printf("%d ", b[i]);
        i++;
    }
    i = 0;

    comp = a[0];

    for (i = 0; i < size_a; i++)
    {
        if (i != 0 && a[i] == comp)
        continue;

        else
        {
            for (j = 0; j < size_b; j++)
            {
                if (a[i] == b[j])
                {
                    counter += 1;
                    break;
                }
            }
            for (k = i + 1; k < size_a; k++)
            {
                if (a[i] == a[k])
                a[k] = comp;

            }
            a[i] = comp;
        }
    }


    printf("\n\nNumber of common elements from array a and array b is equal: %d\n", counter);
    return 0;
}

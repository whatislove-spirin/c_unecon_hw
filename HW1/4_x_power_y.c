#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i = 1;
    long int number = 1;

    printf("Type your number\n");
    scanf("%d", &x);

    printf("Type integer power of your number\n");
    scanf("%d", &y);

    while(i <= y)
    {
        number *= x;
        i++;
    }

    printf("%d power %d is equal %d", x, y, number);
    return 0;
}

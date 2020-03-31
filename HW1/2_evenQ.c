#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;

    printf("Type your number\n");
    scanf("%d", &number);
    if (number % 2 == 0)
        printf("Your number is even");
        else
            printf("You number is odd");
    return 0;
}

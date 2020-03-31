#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,a=0;

    printf("Type your number\n");
    scanf("%d", &number);

    if (number / 10000 == number % 10)
        if (((number % 10000)/1000) == ((number % 100) / 10))
            printf("Your number %d is a palindrome", number);
        else
            printf("Your number %d is not a palindrome", number);
    else
        printf("Your number %d is not a palindrome", number);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter=0, initial_number=0;

    printf("Type your number\n");
    scanf("%d", &number);
    initial_number = number;
    while(number / 10 != 0)
    {
        if (number % 10 == 7)
            counter += 1;
        number = number / 10;
    }
    printf("Amount of 7 in number %d is %d", initial_number, counter);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = -1,i=1, factorial = 1;
    while (number<=0)
    {
        printf("Insert your positive number\n");
        scanf("%d",&number);
        if (number <= 0)
            printf("Inserted number is nonpositive\n");
    }

    while (i<=number)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of your number is %d\n", factorial);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, summ=0;

    while(i<=10)
    {
        summ+=i;
        i+=1;
    }
    printf("Sum of first 10 natural numbers is %d\n", summ);
    return 0;
}

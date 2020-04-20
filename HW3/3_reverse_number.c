#include <stdio.h>
#include <stdlib.h>

int reverse_num(int x)
{
    int t_x = abs(x), r_x=0, adder=0;

    while (t_x>=1)
    {
        r_x = r_x*10;
        adder = t_x % 10;
        t_x = (t_x-adder)/10;
        r_x = r_x+adder;
    }

    if (x>0)
    return r_x;
    else
    return -r_x;
}

int main()
{
    int x=0;

    printf("Enter your number\n");
    scanf("%d",&x);

    printf("Your number (%d) but reversed %d", x, reverse_num(x));

    return 0;
}

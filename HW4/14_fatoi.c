#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int len = 0;

    while(str[len] != '\0'){len++;}

    return len;
}

int fatoi(char *str)
{
    int len = length(str);
    int i = 0;
    int num = 0;
    int mult = 1;

    for (i=len-1; i>=0; i--){
        if (str[i] == '1'){
            num += 1*mult;
            mult *= 10;
        }
        if (str[i] == '2'){
            num += 2*mult;
            mult *= 10;
        }
        if (str[i] == '3'){
            num += 3*mult;
            mult *= 10;
        }
        if (str[i] == '4'){
            num += 4*mult;
            mult *= 10;
        }
        if (str[i] == '5'){
            num += 5*mult;
            mult *= 10;
        }
        if (str[i] == '6'){
            num += 6*mult;
            mult *= 10;
        }
        if (str[i] == '7'){
            num += 7*mult;
            mult *= 10;
        }
        if (str[i] == '8'){
            num += 8*mult;
            mult *= 10;
        }
        if (str[i] == '9'){
            num += 9*mult;
            mult *= 10;
        }
        if (str[i] == '10'){
            num += 10*mult;
            mult *= 10;
        }
        }
    return num;
}




int main()
{
    char arr[40];

    printf("Enter array of characters and numbers\nArray:");

    scanf("%39s", arr);

    printf("Initial array after fatoi %d\n", fatoi(arr));

    return 0;
}

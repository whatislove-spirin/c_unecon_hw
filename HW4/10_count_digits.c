#include <stdio.h>
#include <stdlib.h>

int len(char *str){
    int length = 0;

    while(str[length] != '\0'){length++;}

    return length;
}
int count_digits(char *str)
{
    int k = 0, i = 0;
    for (i=0; i<len(str); i++){
        if (str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' ||
            str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9' || str[i] == '0'){
            k += 1;
        }
    }
    return k;
}


int main()
{
    char arr[10];

    printf("Enter array of characters\nArray:");

    scanf("%9s", arr);

    printf("Digit amount in array is equal %d\n", count_digits(arr));

    return 0;
}

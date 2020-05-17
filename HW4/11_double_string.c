#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int len = 0;

    while(str[len] != '\0'){len++;}

    return len;
}

char *double_string(char *str){
    int i = 0;
    int len = length(str);
    char *str2;

    str2 = malloc(len*2);

    for (i=0; i<len; i++){
        str2[i] = str[i];
    }
    for (i=len; i<2*len; i++){
        str2[i] = str[i-len];
    }

    return str2;
}
int main()
{
    char arr[10];
    char *str2;

    printf("Enter array of characters\nArray:");

    scanf("%9s", arr);

    str2 = double_string(arr);
    printf("Entered array, but doubled %s\n", str2);

    free(double_string(arr));
    return 0;
}

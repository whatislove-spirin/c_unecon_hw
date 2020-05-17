#include <stdio.h>
#include <stdlib.h>

int length(char *str){
    int len = 0;

    while(str[len] != '\0'){len++;}

    return len;
}


char *str_chr (char *s, char c){
    int len = length(s);
    int i = 0;
    int found = 0;
    char *p;

    for (i=0; i<len; i++){
        if (s[i] == c){
            p = &s[i];
            found = 1;
            break;
        }
    }
    if (found == 1){
        return p;
    }
    else
        return NULL;
}

int main()
{
    char s[40];
    char c;

    printf("Enter array of characters and a symbol You want to find address of:\n");
    printf("Array:\n");
    scanf("%39s", s);
    printf("Character:\n");
    scanf(" %c", &c);

    printf("Address: %p", str_chr(s, c));

    return 0;
}

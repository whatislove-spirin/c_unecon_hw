#include <stdio.h>
#include <stdlib.h>

int len(char *str){
    int length = 0;

    while(str[length] != '\0'){length++;}

    return length;
}

char *merge_strings(char *fst, char *sec){
    int len_f = len(fst);
    int len_s = len(sec);

    int i = 0;
    char *mrg = malloc(len_f + len_s);

    for (i=0; i<len_f; i++){
        mrg[i]=fst[i];
    }
    for (i=0; i<len_s; i++){
        mrg[i+len_f]=sec[i];
    }
    return mrg;
    }

int main()
{
    char fst_a[40];
    char sec_a[40];
    char *merged_a;

    printf("Enter first array of characters\nFirst array:");
    scanf("%39s", fst_a);

    printf("\nEnter second array of characters\nSecond array:");
    scanf("%39s", sec_a);

    merged_a = merge_strings(fst_a, sec_a);
    printf("\nMerged strings:%s\n", merged_a);

    free(merged_a);
    return 0;
}

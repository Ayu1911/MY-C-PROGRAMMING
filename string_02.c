#include <stdio.h>
#include<string.h>

int main() {
    char st[]="ayush";
    char s1[56]="ayush";
    char s2[56]="hello";

    char target[30];
    strcpy(target,st);
    printf("%s %s ",st ,target);

    strcpy(target,st);
    printf("%s %s ",s1,s2);
    return 0;
}
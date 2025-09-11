#include <stdio.h>
#include<string.h>

int main() {
    char str[]="ayush";/*for description paste the encrypted output here*/
    for (int  i = 0; i < strlen(str); i++)
    {
        str[i]=str[i] + 1 ;/*and here write -1*/
    }
    printf("%s",str);

    
    return 0;
}
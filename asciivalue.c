#include<stdio.h>

int main (){
    char ch ;

    printf("enter the character :\n");
    scanf("%c",&ch);

    printf("the character is  %c\n",ch);
    printf("the value of  character is  %d\n",ch);

    if(ch >=97 && ch <=122){
        printf("thisi character is lowercase \n");
    }
    else {
        printf("this character is upper case \n");
    }
    return 0;
}
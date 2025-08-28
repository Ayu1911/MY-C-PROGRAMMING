#include <stdio.h>

int main() {
    int marks[5];
    printf("enter the five students marks \n");
    for(int i = 0; i < 5; i++){
        scanf("%d",&marks[i]);
    }
    for(int i =0 ;i < 5 ; i++){
        printf("the value of marks at index 0 and 1 are %d %d \n",i,marks[i]);
    }
    return 0;
}
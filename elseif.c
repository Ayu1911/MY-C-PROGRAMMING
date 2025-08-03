#include<stdio.h>

int main(){
    int age ;

    printf("enter your age :");
    scanf("%d",&age);

    if (age > 60){
        printf("you can drive and you are a senior citizen  ");
    }
    else if (age >40){
        printf("you can dirve\n ");
        printf("you are an elder\n ");
    }
     else if (age >18){
        printf("you can dirve\n ");
        printf("you are an adult\n ");
    }
    else{
        printf("you can not drive");
    }
    return 0;

}
   
 
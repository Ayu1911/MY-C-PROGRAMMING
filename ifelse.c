#include<stdio.h>

int main(){
   int age ;
   printf("enter age :");
   scanf("%d",&age);
   if(age >18){
    printf("you are eligible for driving license \n");
    printf("you can vote\n");
   }
   else if(age >13 && age <18){
    printf("you are a teenager\n");
   }
   else{
    printf("child\n");
   }
   
    return 0;
}
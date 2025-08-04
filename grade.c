#include<stdio.h>

int main(){
    int grade;
    printf("enter grade ");
    scanf("%d",&grade);

    if(grade > 90 && grade <100){
        printf("grade A\n");
    }
    else if(grade > 80 && grade < 90 ){
        printf("grade B");
    }
    else if (grade > 80 && grade < 70){
        printf("grade c");
    }
    else if (grade > 70 && grade < 60){
        printf("grade D");
    }
    else {
        printf("fail\n");
    }

    
    return 0;

}
   
 
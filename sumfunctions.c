#include <stdio.h>

void sum(int x ,int y){
    printf("the sum is %d\n",x+y);
   
}


int main() {
    int a ,b ;
    
    printf("enter a :");
    scanf("%d",&a);

    printf("enter b :");
    scanf("%d",&b);

    sum(a,b);
    return 0;
}
#include <stdio.h>

int main() {
    // Your code starts here
    int n ;
    printf("enter n :\n");
    scanf("%d",&n);
     for(int i =1 ; i <= 10 ;i++){
        printf("%d X %d = %d\n",i,n,n*i);
     }
    return 0;
}
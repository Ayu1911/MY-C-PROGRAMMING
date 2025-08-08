#include<stdio.h>
#include<math.h>

void area(float x , float y){
    printf("the area of rectangle is %2f",x*y);
}

int main(){
    float length;
    float breath;

    printf("enter length :\n");
    scanf("%f",&length);

    printf("enter brath:\n");
    scanf("%f",&breath);

    area(length,breath);

    return 0;
}
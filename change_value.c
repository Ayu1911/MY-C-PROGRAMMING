#include <stdio.h>

void change(int *a){
    *a=*a *10;

}

int main() {
    int x =45;
    printf("the value of a is %d\n",x);
    change(&x);
    printf("the value of a is %d\n",x);
    return 0;
}
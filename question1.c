/*write a programm  having a variable i print the address of 'i' pass this variable 
to a function and print its address .are these  address are same adn why ?

*/
#include <stdio.h>


int returning_5(int *ptr);

int returning_5(int *ptr){
    printf("the value of ptr is %d\n",ptr);
     printf("the value at ptr is %d\n",*ptr);
     return 5;
}

int main() {
    int i=2;
    int* ptr=&i;
    printf("the value of a is %u\n",&i);
    returning_5(ptr);
    return 0;
}
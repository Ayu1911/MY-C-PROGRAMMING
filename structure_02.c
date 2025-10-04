#include <stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[10];

}Emp;

int main() {
    Emp e1;
    e1.code=4545;
    e1.salary=45.524;
    strcpy(e1.name,"ayush");

    printf("%d %f %s",e1.code,e1.salary,e1.name);
    return 0;
}
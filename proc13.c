#include<stdio.h>
int main()
{
    int age=45;
    int *ptr=&age;
    int _age=*ptr;
    printf("%d", *(&age));
    return 0;
}
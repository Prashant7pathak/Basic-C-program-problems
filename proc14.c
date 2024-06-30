#include<stdio.h>
int main()
{
    int *ptr;
    int x;
    ptr=&x;
    *ptr=0;
    // printf("%d\n",x);
    // printf("%d",*ptr);
    *ptr +=5;
    //  printf("%d\n",x);
    // printf("%d",*ptr);
    (*ptr)++;
    printf("%d\n",x);
    printf("%d",*ptr);
    return 0;
}
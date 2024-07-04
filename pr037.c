#include<stdio.h>
void swap(int a,int b);

int main()
{
    int a=3452,b=6479;
    swap(a,b);
    return 0;
}

void swap(int a,int b)
{
    int p;
    p=a;
    a=b;
    b=p;
    printf("swaped value of a is%d and b is %d",a,b);
}
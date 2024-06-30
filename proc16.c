#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int a=9,b=3;
    swap(&a,&b);
    printf("%d & %d",a,b);
}

void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
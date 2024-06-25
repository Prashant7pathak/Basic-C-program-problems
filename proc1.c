#include<stdio.h>
void add(int n);

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    add(n);
    return 0;
}

void add(int n){
    int s;
    s=n*(n+1)/2;
    printf("The sum of first n natural numbers are:%d",s);
}
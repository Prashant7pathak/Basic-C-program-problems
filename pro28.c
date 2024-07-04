#include<stdio.h>
int func1(int n);


int main()
// -:calculate the square of a number given by user:-
{
    int n;
     printf("Enter a number:");
     scanf("%d",&n);
      func1(n);
}

int func1(int n){
    int s;
    s=n*n;
    printf("The square of entered number is:%d",s);
}
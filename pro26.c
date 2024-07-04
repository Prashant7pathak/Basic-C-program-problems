#include<stdio.h>
int main()
// -:calculate the sum of all numbers between 5 and 50:-
{
    int s=0,i;
    for ( i = 5; i <=50; i++)
    {
        s+=i;
    }
     printf("The sum of all numbers are:%d", s);
     return 0;
}
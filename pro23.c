#include<stdio.h>
int main()
{
    int i;
    for( i=6;i>5 && i<=50;i++)
    {
         
        if (i%2!=0)
        {
           printf("%d\n",i);
        }
    }
    return 0;
}
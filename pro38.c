#include<stdio.h>
void print1()
{
   
    for ( int i = 0; i < 4; i++)
    {
        for (int j = 0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}

void print2()
{
     for ( int i = 0; i < 4; i++)
    {
        for (int j = 0; j<=4-i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int n,i,j;
    printf("Enter 0 for triangular print & 1 for reverse triangular print");
    scanf("%d",&n);
    if (n==0)
    {
        print1();
    } else if(n==1){
         print2();
    }else {
        printf("Entered number is invalid");
    }
    
    return 0;
}
#include<stdio.h>
int main()
{
    int n;
    int isprime=1;
    printf("Enter a number:");
    scanf("%d",&n);
    for (int i = 2; i*i<n; i++)
    {
        if(n%i==0){
            isprime=0;
        }
    }
         if (isprime)
        {
            printf("prime");
        }else{
            printf("not prime");
        }
        
    
    
    return 0;
}

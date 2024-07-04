#include<stdio.h>
int main()
{
    int n;
    printf("Enter any numbers:");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("Entered no. is natural number");
    }else{
        printf("Entered no. is not a natural number");
    }
    return 0;
}
#include<stdio.h>
int temp(int n);
int main()
{
    int n;
    printf("Enter any temperature:");
    scanf("%d",&n);
    temp(n);
}
int temp(int n)
{
    if (n>=20)
    {
        printf("weather is hot");
    }else{
        printf("weather is cold");
    }
}

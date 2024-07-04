#include<stdio.h>
int main()
{
    int n;
    printf("Enter a random number");
        scanf("%d",&n);
    while (n%7!=0)
    {
        printf("Enter a random number");
        scanf("%d",&n);
    }
    return 0;
}
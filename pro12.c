#include<stdio.h>
int main()
{
    int n;
    printf("Enter any random number:");
    scanf("%d",&n);
    if(n>9 && n<100){
        printf("True");
    }else{
        printf("false");
    }
    return 0;
}
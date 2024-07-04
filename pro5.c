#include<stdio.h>
int main()
{
    float a,b,c,A;
    printf("Enter the value of a:");
    scanf("%f",&a);
    printf("Enter the value of b:");
    scanf("%f",&b);
    printf("Enter the value of c:");
    scanf("%f",&c);
    A=(a+b+c)/3;
    printf("The required Average of sides are:%f",A);
    return 0;
}
#include<stdio.h>
int main()
{
    float a,b,P;
    printf("Enter the length of rectangle:");
    scanf("%f",&a);
    printf("Enter the breadth of rectangle:");
    scanf("%f",&b);
    P=2*(a+b);
    printf("The required Perimeter of rectangle is:%f",P);
    return 0;
}
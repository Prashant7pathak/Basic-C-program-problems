#include<stdio.h>
int main()
{
    int marks[3];
    printf("Enter your phy marks:");
    scanf("%d",&marks[0]);
    printf("Enter your che marks:");
    scanf("%d",&marks[1]);
    printf("Enter your math marks:");
    scanf("%d",&marks[2]);
    printf("%d %d %d",marks[0],marks[1],marks[2]);
    return 0;
}
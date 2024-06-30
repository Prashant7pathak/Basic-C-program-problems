#include<stdio.h>
int main()
{
    // -: 1st method :-
    int marks[3]={50,50,50},A;
    // -: 2nd method :-
    // printf("Enter your phy marks:");
    // scanf("%d",&marks[0]);
    // printf("Enter your che marks:");
    // scanf("%d",&marks[1]);
    // printf("Enter your math marks:");
    // scanf("%d",&marks[2]);
    A=(marks[0]+marks[1]+marks[2])/3;
    printf("Average is %d",A);
    return 0;
}
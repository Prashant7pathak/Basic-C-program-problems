#include<stdio.h>
#include<conio.h>
int main()
{
    float a,b,c;
    char op;
    printf("Enter the first number:");
    scanf("%f",&a);
    printf("Enter the second number:");
    scanf("%f",&b);
    printf("Enter the opreater:");
    scanf("%c\n",&op);
    switch (op)
    {
    case '+':
        c=a+b;
        printf("result of the operation is:%f",c);
        break;
    case '-':
        c=a-b;
        printf("result of the operation is:%f",c);
        break;
        case '*':
        c=a*b;
        printf("result of the operation is:%f",c);
        break;
        case '/':
        c=a/b;
        printf("result of the operation is:%f",c);
        break;
    default:
        printf("invalid operation");
        break;
        getch();
    }
    return 0;
}
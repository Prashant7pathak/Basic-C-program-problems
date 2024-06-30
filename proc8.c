#include<stdio.h>
void per(float M,float S,float s);

int main()
{
    float M,S,s;
    printf("Enter your Maths marks:");
    scanf("%f",&M);
    printf("Enter your Science marks:");
    scanf("%f",&S);
    printf("Enter your sanskrit marks:");
    scanf("%f",&s);
    per(M,S,s);
    return 0;
}

void per(float M , float S,float s){
    float p;
    p=((M+S+s)/3 )*1;
    printf("your Percentage is%f ",p);
}
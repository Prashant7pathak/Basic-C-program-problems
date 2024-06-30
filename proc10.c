#include<stdio.h>
void per(float M,float S,float s);

int main()
{
    float M,S,s;
    printf("Enter your Mouse:");
    scanf("%f",&M);
    printf("Enter your Stand:");
    scanf("%f",&S);
    printf("Enter your sand:");
    scanf("%f",&s);
    per(M,S,s);
    return 0;
}

void per(float M , float S,float s){
    float p;
    p=(M+S+s) +((M+S+s) * 18/100 );
    printf("your Gst inc. amount is%f ",p);
}
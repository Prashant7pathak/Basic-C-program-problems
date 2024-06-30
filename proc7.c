#include<stdio.h>
void convert(float C,float F);

int main()
{
    float C,F;
    printf("Enter your temperature:");
    scanf("%f",&C);
    convert(C,F);
    return 0;
}

void convert(float C , float F){
    F = C * 9/5 + 32;
    printf("your converted temperature is%f in F",F);
}
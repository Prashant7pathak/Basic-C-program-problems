#include<stdio.h>
int main()
{
    int T;
    printf("Enter your local temperature:");
    scanf("%d",&T);
    if(T<5){
        printf("You are facing a snowing weather");
    }else if(T<15){
        printf("Getting cold");
    }else if(T<25){
        printf("A moderate weather condition");
    }else  {
        printf("Hot weather alert");
    }
        return 0;
    }

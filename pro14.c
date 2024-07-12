#include<stdio.h>
int main()
{
    int n;
    printf("Enter any random number:");
    scanf("%d",&n);
    if(n>90 && n<100){
        printf("grade-A+");
    }else if(n>70 && n<90){
        printf("grade-A");
    }else if(n>30 && n<70){
        printf("grade-B");
    }else if(n<30){
        printf("grade-C");
    }else{
        printf("Format is invalid");
    }
    return 0;
}

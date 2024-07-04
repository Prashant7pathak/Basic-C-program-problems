#include<stdio.h>
int main()
{
    int m;
    printf("Enter your marks:");
    scanf("%d",&m);
    if(m>30){
        printf("You Passed the exam");
        if (m>85)
        {
            printf("You are a Topper");
        }else if(m>50 && m<85){
            printf("You are in average marks range");
        }else if(m>30 && m<50){
            printf("You just Passed the exam");
        }
        
    }else{
        printf("You failed the exam");
    }
    return 0;
}
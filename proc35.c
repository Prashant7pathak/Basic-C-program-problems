#include <stdio.h>
#include<string.h>

struct address
{
    int house ;
    char block;
    char city[45];
    char state[50];
} ;
int main()
{
    struct address a1;
    a1.house=35;
    a1.block='c';
    strcpy(a1.city,"Jaipur");
    strcpy(a1.state,"Rajasthan");
    printf("House no. is:%d\n",a1.house);
    printf("House block is:%c\n",a1.block);
    printf("city is:%s\n",a1.city);
    printf("Your state is:%s",a1.state);
    return 0;
}
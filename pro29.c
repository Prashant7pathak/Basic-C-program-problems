#include<stdio.h>
void func1(char c);


int main()
// -:write a function that prints Namaste if user is indian & Bonjour if user is french:-
{
    char c;
     printf("Enter I if you are indian & enter F if you are french:");
     scanf("%c",&c);
      func1(c);
}

void func1(char c){
    if (c=='F')
    {
        printf("Bonjour");
    }else if(c=='I'){
        printf("Namaste");
    }else{
        printf("invalid entry");
    }
}
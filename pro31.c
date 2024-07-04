#include<stdio.h>
void func1();


int main()
// -:use function for reprinting the same text:-
{
      func1();
      func1();
      func1(); 
      func1();
      func1();

}

void func1(){
    printf("HELLO WORLD\n");
}
//   -:TYPEDEF & Unions:-
/*#include <stdio.h>
int main()
{
    typedef unsigned long ul;
    typedef int integer;
    ul l1,l2,l3;
    integer a=4;
    printf("value of a is %d",a);
    return 0;
}
*/

#include <stdio.h>
#include<string.h>
union test
{
    int a;
    float b;
    char c[55];
}un;

int main()
{
    un.a=34;
    un.b=35.56;
    strcpy(un.c,"Hello world");
    printf("c is:%s",un.c);
    return 0;
}
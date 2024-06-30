#include <stdio.h>
int func1(int b)
{
    //   printf("the address of function is %d\n",b);
    static int myvar=0;
    printf("the value of myvar is:%d\n",myvar);
    myvar++;
    return b + myvar;
}
int main()
{
    int b=69;
    // printf("the address of main is %d\n",&b);
    int val=func1(b);
     val=func1(b);
     val=func1(b);
     val=func1(b);
     val=func1(b);
    int *ptr=&val;
    // printf("the value of function is %d",val);
    return 0;
}
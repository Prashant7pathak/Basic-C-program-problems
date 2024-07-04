#include<stdio.h>
#include<math.h>
#define PI 3.142
int square(int n);
float circle(int r );
int rectangle(int a, int b);


int main()
{
    int n,a,b;
    int r;
      square(n);
      circle(r);
    rectangle(a,b);
}

int square(int n){
    int s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=n*n;
    printf("Square is:%d\n",s);
}

float circle(int r){
    float A;
    printf("Enter a radius:");
    scanf("%d",&r);
    A=r*PI*r;
    printf("Area of circle is:%f\n",A);
}

int rectangle(int a, int b){
    int A;
    printf("Enter length a is:");
    scanf("%d",&a);
    printf("Enter breadth b is:");
    scanf("%d",&b);
    A=a*b;
    printf("Area of Rectangle is:%d",A);
}
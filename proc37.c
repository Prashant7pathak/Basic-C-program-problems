#include <stdio.h>
struct complex
{
 int real;
 int img;
};

int main()
{
     struct complex c1={3,7};
     struct complex *ptr=&c1;
    printf("real part=%d\n",ptr->real);
     printf("img part=%d\n",ptr->img);
    return 0;
}

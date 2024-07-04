#include <stdio.h>
int main() {
    int a,b;

   printf("Enter Two Numbers");
   scanf("%d %d",&a,&b);

  // Small among a and b
    if(a<b)
      {
        printf("smallest no is %d",a);
      }
    else
      {
          printf("smallest no is %d",b);
      } 

 return 0;

}
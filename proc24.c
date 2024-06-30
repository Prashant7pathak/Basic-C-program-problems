#include<stdio.h>
int main()
{
  char firstnam[]="prashant";
  char lastnam[]="pathak";
//   printf("%s",firstnam);
  for (int i = 0; i < 8; i++)
  {
    printf("%c\t",firstnam[i]);
  }
   for (int j = 0; j < 6; j++)
  {
    printf("%c\t",lastnam[j]);
  }
return 0;
}
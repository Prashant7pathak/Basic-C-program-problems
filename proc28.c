#include<stdio.h>
int main()
{ int count=0;
  char user[100];
  gets(user);
  puts(user);
  for (int i = 0; user[i]!='\0'; i++)
  {
    count++;
  }
  printf("length is: %d",count);
  
return 0;
}
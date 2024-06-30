#include<stdio.h>
#include<string.h>
struct Employee
{
    int ID;
    char name[50];
    float marks;
};
struct Employee e1,e2;

int main()
{
    
    e1.ID=23;
    strcpy(e1.name,"ram");
    e1.marks=34.67;
    e2.ID=25;
    strcpy(e2.name,"ramu");
    e2.marks=36.67;
    printf("e1 ID is:%d\n",e1.ID);
    printf("e2 marks is:%f\n",e2.marks);
    printf("e2 name is:%s",e2.name);

return 0;
}
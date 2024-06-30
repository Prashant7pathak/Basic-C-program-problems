#include <stdio.h>
#include<string.h>
struct student
{
    int roll;
    float cgpa;
    char name[305];
};

int main()
{
    struct student s1;
    s1.roll=344567;
    s1.cgpa=8.9;
    strcpy(s1.name,"ramu");
    printf("stuent roll=%d\n",s1.roll);
    printf("stuent cgpa=%0.1f\n",s1.cgpa);
    printf("stuent name=%s",s1.name);
    return 0;
}
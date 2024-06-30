#include<stdio.h>
int main()
{
    int count=0;
    int arr[100]={34,45,46,37,39,363,38,69,40,66,54,45,65};
    for (int i = 0; i < 100; i++)
    {
        if (arr[i]%2!=0)
    {
        count++;
    }
    }
    printf("%d",count);
    return 0;
    
}
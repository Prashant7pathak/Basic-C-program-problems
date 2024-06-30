#include<stdio.h>
int main()
{
    int i, arr[]={34,2,5,69};
    for ( i = 0; i < 4; i++)
    {
        int firstval=arr[i];
        int secondval=arr[4-i-1];
        arr[i]=secondval;
        arr[4-i-1]=firstval;

    }
      printf("%d",arr[i]);
    
    return 0;
}
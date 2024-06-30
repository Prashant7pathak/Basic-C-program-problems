#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr=fopen("set.txt","w");
    char ch;
    fprintf(fptr,"%c",'M');
    
    fscanf(fptr,"%c",'a');
    
    fprintf(fptr,"%c",'n');
    
    fprintf(fptr,"%c",'g');
    
    fprintf(fptr,"%c",'o');
    
    fclose(fptr);
    
    return 0;
}
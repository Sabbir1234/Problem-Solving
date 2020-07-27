#include<stdio.h>

void printlimit(int i,int limit)
{

    if(i>=limit)
        return;
    printf("%d ",i);
    return printlimit(i+=2,limit);
}
int main()
{
    int limit;
    scanf("%d",&limit);
    printf("All odd number from 1 to %d are: ",limit);
    printlimit(1,limit);
}

#include<stdio.h>
int main()
{
    int ar[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
        sum=sum+ar[i];
    }

    printf("%d\n",sum);
}

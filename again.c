#include<stdio.h>
int main()
{
    int exp[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&exp[i]);

    }
    for(i=0;i<5;i++)
    {
        sum=sum+exp[i];
    }
    printf("%f\n",sum/5.0);
}

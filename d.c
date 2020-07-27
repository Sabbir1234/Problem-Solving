#include<stdio.h>
int main()
{
    long int n,i;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=2;i<=9;i+=2)
    {
        if(n%i==0)
        {
            printf("%d%d\n",i,n/i);
            break;
        }
    }
    }
    else
    {
        for(i=3;i<=(n+1)/2;i++)
            if(n%i==0)
        {
            printf("%d%d\n",i,n/i);
            break;
        }
    }
}

#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    if(n>0)
    {
       for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    }
    else
    {
        for(i=1;i>=n;i--)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);

}

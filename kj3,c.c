#include<stdio.h>
int main()
{
    int t,i,sum,b,j,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            for(k=1;k<=a;k++)
            {
                scanf("%d",&b);
                for(j=1,k=3;j<=a,k>=1;j++,k--)
                {
                    sum+=b;
                }
            }
        }
        printf("%d\n",sum);
    }
}

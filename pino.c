#include<stdio.h>
int main()
{
    int t,i,d=2,sum=0,e,j,a,b,z;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        d=2;
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%d",&b);
            if((b-d)>5)
            {
                z=0;
                if((b-d)%5!=0)
                {
                    z=1;
                }
                e=(b-d)/5 + z;
            d=b;
            sum=sum+e;

            }
            else
            {
                if((b-d)!=0)
                {
                   e=1;
                d=b;
                sum+=e;
                }

            }

        }
        printf("Case %d: %d\n",i,sum);
    }
}

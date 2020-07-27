#include<stdio.h>
int main()
{
    int n,i,j,count,sum,a,b,av;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=0;
        scanf("%d",&a);
        for(j=1;j<=a;j++)
        {
            scanf("%d",&b);
            sum=sum+b;
        }
        av=sum/a;
        for(j=1;j<=a;j++)
        {
            count=0;
            if(b>av)
            {
                count=count+1;
            }
        }
        printf("%lf\n",(count/b)*100);

    }
    return 0;
}

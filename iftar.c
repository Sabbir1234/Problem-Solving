#include<stdio.h>
int main()
{
    int t,i,a,b,n,count,c,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        count=0;
        scanf("%d %d",&a,&b);
        c=(a-b);
        printf("Case %d: ",i);
        for(j=b+1;j<=c;j++)
        {
            if(c%j==0)
            {

                printf("%d ",j);
                count++;
            }

        }
        if(count==0)
            {
                printf("impossible\n");
            }
    }
}

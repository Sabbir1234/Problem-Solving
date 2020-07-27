#include<stdio.h>
int main()
{
    int t,i,n,r,j,m,b,r1,r2;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&n,&m);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&b);
            r=0;
            if(j==1)
            {
            r1=m/b;
            }
            if(j==n)
            {
                r2=m/b;
            }
            r=r1+r2;
            }
        printf("Case %d: %d\n",i,r);
    }

    return 0;

}

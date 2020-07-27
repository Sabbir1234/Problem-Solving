#include<stdio.h>
int main()
{
    int f,c,d,i,t;
    double C,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&c,&d);
        if(d==0)
            printf("Case %d: %d.00\n",i,c);
        else
        {
            C=5*(f-32)/9;
            r=c+C;
            printf("Case %d: %lf\n",i,r);
        }
    }
    return 0;

}

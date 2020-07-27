#include<stdio.h>
int main()
{
    int t,i;
    double v1,v2,v3,a1,a2,s,t1,t2,pakhi,s1,s2;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        s1=((v1*v1)/(2*a1));
        s2=((v2*v2)/(2*a2));
        s=s1+s2;
        t1=v1/a1;
        t2=v2/a2;
        if(t1>t2)
        {
            t=t1;
        }
        else
        {
            t=t2;
        }
        printf("Case %d: %lf %lf\n",i,s,t*v3);
    }
}

#include <stdio.h>
int main()
{
    int test,i;
    double time1,time2,d1,d2,t;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        double v1,v2,v3,a1,a2;
        scanf("%lf%lf%lf%lf%lf",&v1,&v2,&v3,&a1,&a2);
        d1=v1*v1/2/a1+v2*v2/2/a2;
        time1=v1/a1;
        time2=v2/a2;
        if(time1>time2)t=time1;
        else{
            t=time2;
        }
        d2=t*v3;
        printf("Case %d: %lf %lf\n",i,d1,d2);
    }
    return 0;
}

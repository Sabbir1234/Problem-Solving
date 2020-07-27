#include<stdio.h>
int main()
{
    int t,i;
    float a,b,c,e,f,x,y;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f",&a,&b,&c);
        x=b-a;
        y=c-b;
        e=c/b;
        f=b/a;
        if(x==y && e==f)
        {
            printf("Case %d: Both\n",i);
        }
        else if(x==y && e!=f)
        {
            printf("Case %d: Arithmetic Progression\n",i);
        }
        else if(e==f && x!=y)
            printf("Case %d: Geometric Progression\n",i);
        else
            printf("Case %d: None\n",i);
    }
}

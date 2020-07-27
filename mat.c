#include<stdio.h>
int main()
{
    int t,a,b,i,f;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(b>a)
        {
             printf("Case %d: %d\n",i,(b*4)+19);
        }
        else
        {
            f=(((a-b)+a)*4)+19;
            printf("Case %d: %d\n",i,f);
        }

    }
    return 0;
}

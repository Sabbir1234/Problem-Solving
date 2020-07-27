#include<stdio.h>
int main()
{
    long long n,k,m;
    int i,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld %lld",&n,&k,&m);
        if(m<n)
        {
             printf("0\n");
             continue;
        }
        else
        {
            for(i=0;(n*k)<=m;i++)
            {
                n=n*k;
            }
        }

        printf("%d\n",i);
    }
    return 0;
}

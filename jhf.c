#include<stdio.h>
int main()
{
    int t,i;
    long long g;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&g);
        printf("Case %d: %lld\n",i,g/2);
    }
    return 0;
}

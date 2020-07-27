#include<stdio.h>
long long a[25];
int main()
{
    long long t,c=100000,temp,i,j,f;
    scanf("%lld",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
    }

    for(i=0;i<t-1;i++)
    {
        int d=abs(a[i]-a[i+1]);
        if(d<c)
        {
            c=a[i]-a[i+1];
        }
    }
    f=abs(c);
    printf("%lld\n",f);
    return 0;
}

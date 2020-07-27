#include<stdio.h>
#define NIL -1
int a[100];
long long f(int n)
{
    if(a[n]==NIL)
    {
        if(n==0)
            a[n]=0;
        if(n==1)
        a[n]=1;
        else
        a[n]=f(n-1)+f(n-2);
    }
    return a[n];
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        a[i]=NIL;
    long long ans=f(n);
    printf("%lld\n",ans);
}

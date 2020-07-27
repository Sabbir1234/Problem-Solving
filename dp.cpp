#include<stdio.h>
int lookup[100];
long long fib(int n)
{
   if(lookup[n]==-1)
   {
       if(n<=1)
        lookup[n]=1;
       else
        lookup[n]=fib(n-1)+fib(n-2);
   }
   return lookup[n];
}
int main()
{
    int i,n;
        scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        lookup[i]=-1;
    }
    long long  c=fib(n);
    printf("%lld\n",c);
}

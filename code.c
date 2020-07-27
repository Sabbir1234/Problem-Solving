#include<stdio.h>
int main()
{
    long long n,k,sum=0,i,d,f;
    double h;
    scanf("%I64d %I64d",&n,&k);
    if((n-k+1)>0)
        f=n-k+1;
        else
        f=1;
    long long a[n];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&a[i]);
    }
    if(n==1)
        printf("%.10lf\n",(double)a[0]/f);
        else
        {
    for(i=0;i<n-1;i++)
    {
        d=a[i]+a[i+1];
        sum+=d;
    }
    h=(double)sum/f;
    printf("%.10lf\n",h);
        }
   return 0;
}

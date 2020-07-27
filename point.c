#include<stdio.h>
int main()
{
   long long i,j,t,n,x=1000000,c=-x,y,d,cnt;
   scanf("%d",&t);
   while(t--)
   {
       cnt=0;
       scanf("%lld",&n);
       long long a[n],b[n];
       for(j=0;j<n;j++)
       {
           scanf("%lld %lld",&a[j],&b[j]);
           /*if(a[j]<x)
           {
               d=j;
               x=a[j];
               y=b[j];
           }*/

       }
       for(j=0;j<n;j++)
       {
           for(i=0;i<n;i++)
       {
           if(a[j]>=a[i] && b[j]>=b[i])
            cnt++;
       }
           if(cnt>c)
            c=cnt;
       }

       printf("%lld\n",c);
   }


}

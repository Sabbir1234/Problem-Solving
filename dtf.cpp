#include<stdio.h>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
   long long n,i,sum,j;
   while((scanf("%lld",&n))==1)
   {
       if(n==0)
        break;
       sum=0;
   long long p[n],c[n];
      for(i=0;i<n;i++)
   {
       scanf("%lld",&c[i]);
   }
   for(i=0;i<n;i++)
   {
       scanf("%lld",&p[i]);
   }
   sort(p, p+n);
   sort(c, c+n);
   for(i=n-1,j=0;i>=0,j<n;i--,j++)
   {
       sum=sum + (p[i]*c[j]);
   }
   printf("%lld\n",sum);
   }

  return 0;
}

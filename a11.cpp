#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll t,a,b,i,A,B;
     cin>>t;
     while(t--)
     {
         cin>>A>>B;
         a=min(A,B);
         b=max(A,B);
         if(a==0)
         {
             printf("0\n");
         }
         else if(b>=2*a)
         {
             printf("%lld\n",a);
         }
         else
         {
             printf("%lld\n",(a+b)/3);
         }
     }
}

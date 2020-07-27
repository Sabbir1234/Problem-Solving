#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll cnt=0;
ll rec(ll n)
{
    if(n==1)
    {
        return 1;
    }
    return rec(n/2)*2 + 1;
}
int main()
{
   ll n,res;
   cin>>n;
   res=rec(n);
   printf("%lld\n",res);
}

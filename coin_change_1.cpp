#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll val[100],cnt[100];
ll ans,n;
ll fun(ll in ,ll rem)
{
   ll i;

   if(in == n) {
        if(rem==0) return 1;
        else return 0;
    }

    if(rem==0) return 1;
    else if (rem < 0) return 0;
    ans =0;
    for(i=0;i<=cnt[in];i++)
    {
        if(rem - val[in]*i >= 0)
        {
            ans=(ans + fun(in+1,rem - val[in]*i));
        }
        else
        {
            break;
        }

    }
    return ans;
}
int main()
{
    ll t,i,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k; ans=0;
        for(i=0;i<n;i++)
        {
            cin>>val[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>cnt[i];
        }
        ll res = fun(0,k);
        printf("%lld\n",res);
    }
}

#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
ll flag;
ll fnd(ll a)
{
    ll m=10,M=0;
    while(a)
    {
        m=min(m,a%10);
        M=max(M,a%10);
        a/=10;
    }
    if(m*M==0) flag=1;
    return m*M;
}

int main()
{
    ll t,a,k,i,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>k;
        ans=a; flag=0;
        for(i=2;i<=k;i++)
        {
            ans= ans + fnd(ans);
            if(flag)
                break;
        }
        cout<<ans<<endl;
    }
}

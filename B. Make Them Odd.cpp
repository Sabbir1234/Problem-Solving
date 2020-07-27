#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<ll,ll>mp;
vector<ll>v;
int main()
{
    ll t,n,i,x,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2==0)
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<ll>());
        ll cnt=0;
        for(i=0;i<v.size();i++)
        {
            x=v[i];
            if(mp[x])
                continue;
            while(x%2==0)
            {
                cnt++;
                mp[x]=1;
                x=x/2;
            }
        }
        printf("%lld\n",cnt);
        v.clear(); mp.clear();
    }
}

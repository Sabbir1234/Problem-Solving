#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
int main()
{
    ll n,q,i,x,a,low=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>q;
    while(q--)
    {
        low=0;
        cin>>x;
        low+= upper_bound(v.begin(),v.end(),x)- v.begin();
        printf("%lld\n",low);

    }
}

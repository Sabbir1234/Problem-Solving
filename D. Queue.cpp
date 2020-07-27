#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
int main()
{
    ll n,i,j,a;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll cum=0,cnt=0;
    for(i=0;i<n;i++)
    {
        if(v[i]>=cum)
        {
            cnt++;
            cum+=v[i];
        }
    }
    printf("%lld\n",cnt);
}

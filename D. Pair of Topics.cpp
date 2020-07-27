#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
struct node{
    ll a,b,dif;
};
node ab[200009];
bool comp(node a,node b)
{
    return a.dif>b.dif;
}
int main()
{
    ll n,i,a,b,ans;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        ab[i].a=a;
    }
    for(i=0;i<n;i++)
    {
        cin>>b;
        ab[i].b=b;
        ab[i].dif=(ab[i].a-ab[i].b)-1;
    }
    sort(ab,ab+n,comp);
    ans=0; v.push_back(ab[0].dif);
    for(i=1;i<n;i++)
    {
        if((ab[i].b-ab[i].a)<=ab[i-1].dif)
        {
            ans+=(i);
            v.push_back(ab[i].dif);
        }
        else
        {
            vector<ll>:: iterator up;
            up = upper_bound(v.begin(), v.end(), (ab[i].b-ab[i].a) ,greater<long long>());
            ans+= up - v.begin();
            v.push_back(ab[i].dif);
        }
    }
    printf("%lld\n",ans);
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll infinity=1e17;

struct edge{
   ll a,b,c;
};


int main()
{
    ll n,m,u,v,w,i;
    vector<edge>e;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        e.push_back({u , v, w});



    }
    for(i=0;i<m;i++)
        printf("%lld %lld\n",e[i].a,e[i].b);
}

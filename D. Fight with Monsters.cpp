#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll infinity=1e17;
vector<ll> edge[200009], cost[200009];
ll dis[200009];
struct data{
    ll city, dist;
    bool operator < (const data & p) const {
    return dist > p.dist;
  }
};
void dijkstra(ll s,ll dest)
{
    priority_queue<data>q;
    dis[s]=0; ll k=2,i;
    for(i=0;i<100009;i++){dis[i]=infinity;}
    data u,v;
    u.city=s; u.dist=0;dis[s]=0;
    q.push(u);
    while(!q.empty())
    {
        u=q.top(); q.pop();
        if(u.city==dest)break;
        for(i=0;i<edge[u.city].size();i++)
        {
            v.city=edge[u.city][i];
            v.dist=cost[u.city][i]+dis[u.city];
            if(dis[v.city]>v.dist)
            {
                dis[v.city]=v.dist;
                q.push(v);
            }
        }
    }


}
int main()
{
    ll n,m,i,j,a,b,c,k;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        if(a==b)continue;
        edge[a].push_back(b);edge[b].push_back(a);
          cost[a].push_back(c);cost[b].push_back(c);
    }
    dijkstra(1,n);
    if(dis[n]==infinity)
        printf("-1\n");
    else
        printf("%lld\n",dis[n]);

}

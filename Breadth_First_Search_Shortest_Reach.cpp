#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>adj[100010];
queue<ll>qu;
ll vis[100010],dis[100010]
ll in=1000000000‬;
void bfs(ll s)
{
    vis[s]=1; ll i,u,v; qu.push(s);
    while(!qu.empty())
    {
        u=qu.front(); qu.pop();
        for(i=0;i<adj[u].size();i++)
        {
            v=adj[u][i];
            if(vis[v]==0)
            {
                qu.push(v);
                if(dis[u]+6<dis[v])
                    dis[v]=dis[u]+6;
                vis[v]=1;
            }
        }
    }
}
void cl()
{
    int i;
    for(i=1;i<=100000;i++)
    {
        vis[i]=0;
        dis[i]=in;
        adj[i].clear();
    }
}
int main()
{
    ll q,n,m,i,j,s,a,b;
    cin>>q;
    while(q--)
    {
        cin>>n>>m; cl();
        for(i=1;i<=m;i++)
        {
            cin>>a>>b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        cin>>s;
        dis[s]=0;
        bfs(s);
        for(i=2;i<=n;i++)
        {
            if(dis[i]==inf)
            {
                printf("-1\n");
            }
            else
                printf("%lld\n",dis[i]);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
vector<long long>adj[100010];
queue<long long>qu;
long long vis[100010],dis[100010];
long long ab=9000000000;
void bfs(long long s)
{
    vis[s]=1; long long i,u,v; qu.push(s);
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
        dis[i]=ab;
        adj[i].clear();
    }
}
int main()
{
    long long q,n,m,i,j,s,a,b;
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
        for(i=1;i<=n;i++)
        {
            if(i==s) continue;
            if(dis[i]==ab)
            {
                printf("-1 ");
            }
            else
                printf("%lld ",dis[i]);
        }
        cout<<endl;
    }
}

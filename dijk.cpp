#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<pair<ll,ll>>v[10009];
queue<ll>q;
ll dis[10009],vis[10009];
void bfs(ll s)
{
    ll i,u,w,x;
    q.push(s);
    //printf("abc\n");
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        //printf("def\n");
        for(i=0;i<v[u].size();i++)
        {

            x=v[u][i].first;
            w=v[u][i].second;

                if(dis[u]+w < dis[x])
                {

                dis[x]=dis[u]+w;
                q.push(x);}


        }

    }
}
int main()
{
    ll n,m,a,b,c,i;
    memset(dis,1000009,sizeof(dis));
    memset(vis,0,sizeof(vis));
    dis[1]=0;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
    }
    bfs(1);
    for(i=2;i<=n;i++)
        printf("%lld ",dis[i]);
    cout<<endl;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mx 1<<30
vector<pair<ll,ll>>v[100009];
queue<ll>q;
ll dis[100009],road[100009]={0},ar[100009]={0},br[100009]={0},flag=1;
struct node{
    int u,cost;
    node(int _u,int _cost)
    {
        u=_u;
        cost=_cost;
    }
    bool operator < (const node &p) const{
        return cost>p.cost;
    }

};
void bfs(ll s,ll n)
{
    ll i,x,y,w,d,k=0;
    priority_queue<node>q;
    q.push(node(s,0));
    while(!q.empty())
    {
        node p=q.top();
        q.pop();
        x=p.u;
        if(x==n)
        {
            road[n]=-2;
            flag=2;
            return;
        }
        for(i=0;i<v[x].size();i++)
        {
            y=v[x][i].first;
            d=v[x][i].second;
            if(dis[x]+d < dis[y])
            {
                road[x]=y;
                dis[y]=dis[x]+d;
                q.push(node(y,dis[y]));
            }
        }
    }
}
void cl(ll n)
{
    for(ll i=1;i<=n;i++)
        dis[i]=mx;
}
int main()
{
    ll n,m,a,b,c,i,k,z;

    flag=1;
    cin>>n>>m;
    cl(n);
    dis[1]=0;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b>>c;
        if(a==b)
            continue;
        if((ar[a]==b || br[b]==a) && v[a][b].second < c)
            continue;
        v[a].push_back(make_pair(b,c));
        v[b].push_back(make_pair(a,c));
        ar[a]=b;br[b]=a;
    }
    bfs(1,n);
    if(flag==1)
    {
        printf("-1\n");
        return 0;
    }
    z=1;
    while(z!=road[n])
    {
        printf("%lld ",z);
        z=road[z];
    }

    cout<<endl;
}

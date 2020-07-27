#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,pair<int,int>>
pi ed[200009];
ll parent[200009],edge;
ll root(ll x)
{
    if(parent[x]==x)
    {
        return x;
    }
    else
    {
        parent[x]=root(parent[x]);
        return parent[x];
    }
}
void un(ll a,ll b)
{
    a=root(a);
    b=root(b);
    parent[a]=parent[b];
}
ll kruskal(pi p[])
{
    ll i,x,y,cost,m=0;
    for(i=0;i<edge;i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if(root(x)!=root(y))
        {
            m+=cost;
            un(x,y);
        }
    }
    return m;
}
void init()
{
    for(int i=0;i<=200000;i++)
        parent[i]=i;
}
int main()
{
    ll node,i,j,ans,org,u,v,c;
    while(scanf("%lld %lld",&node,&edge)==2)
    {
        org=0;
        ans=0;
        init();
        if(node==0 && edge==0)
            break;
        for(i=0;i<edge;i++)
        {
            cin>>u>>v>>c;
            org+=c;
            ed[i]=make_pair(c,make_pair(u,v));
            ed[i]=make_pair(c,make_pair(v,u));
        }
        sort(ed,ed+edge);
        ans=kruskal(ed);
        cout<<org-ans<<endl;
    }
}

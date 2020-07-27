#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll parent[500009],ar[500009];
ll sz[500009];
ll root(ll a)
{
    if(parent[a]==a)
        return a;
    else
    {
        parent[a]=root(parent[a]);
        return parent[a];
    }
}
void union_find(ll a,ll b)
{
    a=root(a);
    b=root(b);
    if(a!=b)
    {
        if(sz[a]>=sz[b])
        {
            parent[b]=parent[a];
            sz[a]+=sz[b];
        }
        else
        {
            parent[a]=parent[b];
            sz[b]+=sz[a];
        }
    }
}
void init()
{
    ll i;
    for(i=1;i<=500009;i++)
    {
        sz[i]=1;
        parent[i]=i;
    }
}
int main()
{
    ll n,m,i,a,j,x;
    init();
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x;
        for(j=0;j<x;j++)
        {
            cin>>ar[j];
            if(j>0)
            {
                union_find(ar[0],ar[j]);
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        a=root(i);
        printf("%lld ",sz[a]);
    }
    printf("\n");
}

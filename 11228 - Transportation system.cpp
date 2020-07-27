#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<double,pair<int,int>>
set<int>v;
pi edge[1000009];
ll ax[1009],ay[1009],parent[1009],rail,road,d=0;
ll root(ll x)
{
    if(parent[x]==x)
        return x;
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
    v.insert(parent[a]);

}
void kruskal(pi edge[],ll f,ll r)
{
    ll i,a,b;
    road=0,rail=0;
    double c,ro=0,ra=0;
    for(i=0;i<f;i++)
    {
        a=edge[i].second.first;
        b=edge[i].second.second;
        c=edge[i].first;
        if(c>r)
        {

            if(root(a)!=root(b))
            {
                d++;
                ra+=c;
                un(a,b);

            }
        }
        else
        {
            if(root(a)!=root(b))
            {
                ro+=c;
                un(a,b);
            }
        }
    }
    road=round(ro);
    rail=round(ra);
}
void init()
{
    for(ll i=0;i<1009;i++)
        parent[i]=i;
}
int main()
{
    ll t,n,i,j,x,y,f,r,k;
    double dis;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        f=0;d=1;
        init();
        cin>>n>>r;
        for(j=0;j<n;j++)
        {
            cin>>x>>y;
            ax[j]=x;ay[j]=y;
            for(k=0;k<j;k++)
            {
                dis=sqrt((ax[j]-ax[k])*(ax[j]-ax[k]) + (ay[j]-ay[k])*(ay[j]-ay[k]));
                edge[f++]=make_pair(dis,make_pair(j,k));
            }
        }
        sort(edge,edge+f);
        kruskal(edge,f,r);
        printf("Case #%lld: %lld %lld %lld\n",i,d,road,rail);
        v.clear();


    }
}

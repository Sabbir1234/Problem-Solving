#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,pair<int,int>>
 pair<int,pair<int,int>>p[1000090];
ll parent[1000009]={0};
void init()
{
    for(ll i=0;i<1000009;i++)
        parent[i]=i;
}
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
}
ll kruskal(pi p[],ll k)
{
    ll i,a,b;
    ll cost=0,minimum=0;
    for(i=0;i<k;i++)
    {
        a=p[i].second.first;
        b=p[i].second.second;
        cost=p[i].first;
        if(root(a)!=root(b))
        {
            un(a,b);
            minimum+=cost;
        }
    }
    return minimum;
}

int main()
{
    //freopen("s.txt","w",stdout);
    ll n,k,i,j,a,b,c,org,m,mk;
    ll flag=0;
     while(scanf("%lld",&n)==1)
     {

         org=0;
         m=0;
         init();

         for(i=0;i<n-1;i++)
         {
             cin>>a>>b>>c;
             org+=c;
             p[i]=make_pair(c,make_pair(a,b));
         }
        if(flag)
        {
            printf("\n");
        }
        printf("%lld\n",org);
         cin>>k;
         for(j=1;j<=k;j++)
         {
             cin>>a>>b>>c;
             p[i++]=make_pair(c,make_pair(a,b));
         }
         sort(p,p+i);
         m=kruskal(p,i);
         cin>>mk;
         for(i=1;i<=mk;i++)
            cin>>a>>b>>c;
         printf("%lld\n",m);
         flag++;
         //cl();
     }
}

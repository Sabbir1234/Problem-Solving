#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define debug(...) 42
#ifdef LOCAL
#include "wo.h"
#endif // LOCAL
using namespace __gnu_pbds;
using namespace std;
#define ll long long
ll parent[100009],sz[100009];
using ordered_set =tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>;

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
void un(ll a,ll b,vector<ordered_set>mp)
{
    a=root(a);
    b=root(b);
    if(mp[a].size()>mp[b].size()) swap(a,b);
    for(int it : mp[a])
    {
        mp[b].insert(it);
    }
    //mp[a].clear();
    parent[a]=b;

}
void init()
{
    for(ll i=0;i<100009;i++)
       {
          parent[i]=i;
       }
}
int main()
{
    ll tc,n,q,i,j,a,b,t,qu,l,r,x,up,low,k=0,m=0,hi,lo;
    cin>>tc;
    for(i=1;i<=tc;i++)
    {
        vector<ordered_set>mp(100009);
        printf("Case %lld:\n",i);
        init();
        cin>>n>>q;
        for(j=1;j<=q;j++)
        {
            cin>>qu;
            if(qu==0)
            {
                cin>>a>>b;
                if(root(a)!=root(b))
                {
                    un(a,b,mp);
                }
            }
            else if(qu==1)
            {
                cin>>a>>t;
                x=root(a);
                mp[x].insert(t);
            }
            else{

               cin>>a>>l>>r;
               x=root(a);
               lo=mp[x].order_of_key(l);
               hi=mp[x].order_of_key(r+1);
               printf("%lld\n",hi-lo);
                }
        }
      //cl();
    }
}

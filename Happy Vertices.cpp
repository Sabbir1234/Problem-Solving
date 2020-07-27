#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v[2010];
ll visited[2010],flag;
void dfs(ll s)
{
    visited[s]=1; ll cnt=1,u,i;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(visited[u]==1){flag=1;return;}
        else
          dfs(u);

    }
}
int main()
{
    ll n,m,x,y,i,j=1,z,cn=0,t;
    cin>>t;
    while(t--)
    {
        memset(visited,0,sizeof(visited));
        flag=0;
        cin>>n>>m;
       for(i=1;i<=m;i++)
       {
        cin>>x>>y;
        if(i==1)z=x;
        v[x].push_back(y);
       }
       for(i=1;i<=n;i++)
       {
           if(visited[i]==0)
             {
                 dfs(i);
             }
       }

      printf("Scenario #%lld:\n",j++);
       if(flag)
        printf("Suspicious bugs found!\n");
       else
        printf("No suspicious bugs found!\n");
      for(i=0;i<=2000;i++)
        v[i].clear();


    }



}

#include<bits/stdc++.h>
using namespace std;
vector<int>g[50009];
int vis[50009]={0},sum[50009]={-1};
int dfs(int s)
{
    int u,i,tot=0;
    vis[s]=1;
    for(i=0;i<g[s].size();i++)
    {
        u=g[s][i];
        if(vis[u]==0)
           tot+=1+dfs(u);
    }
    vis[s]=0;
    return sum[s]=tot;
}
void cl()
{
    for(int i=0;i<=50000;i++)
    {
        g[i].clear();
    }
}
int main()
{
    int t,n,i,j,u,v;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cl();
        cin>>n;
        memset(sum,-1,sizeof(sum));
        memset(vis,0,sizeof(vis));
        int bst=-100,ans=0;
        for(j=1;j<=n;j++)
        {
            cin>>u>>v;
            g[u].push_back(v);
        }
        for(j=1;j<=n;j++)
        {
            if(sum[j]== -1)
            {
                dfs(j);
            }
            if(bst<sum[j])
            {
                bst=sum[j];
                ans=j;
            }

        }
        printf("Case %d: %d\n",i,ans);
    }
}

#include<bits/stdc++.h>
using namespace std;
vector<int>adj[50010];
int vis[50010],vis2[50010],cnt;
void dfs(int s)
{
    int i,u;
    vis[s]=1,vis2[s]=1, cnt++;
    for(i=0;i<adj[s].size();i++)
    {
        u=adj[s][i];
        if(vis2[u]==0)
        {
            dfs(u);
        }

    }
    vis2[s]=0;
}
void cl()
{
    for(int i=1;i<=50010;i++)
    {
        adj[i].clear();vis[i]=vis2[i]=0;
    }
}
int main()
{
    int t,n,i,j=1,m,x,u,v;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n); cl(); m=-1000;

        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
        }
        for(i=1;i<=n;i++)
        {
            cnt=0;
            if(vis[i]==0)
            {
                dfs(i);
                if(cnt>m)
                {
                    x=i;
                    m=cnt;
                }

            }
        }
        printf("Case %d: %d\n",j++,x);

    }
}

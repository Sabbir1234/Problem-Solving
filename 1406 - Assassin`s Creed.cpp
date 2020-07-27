#include<bits/stdc++.h>
using namespace std;
vector<int>adj[20];
stack<int>st;
int vis[20];
void dfs(int s)
{
    vis[s]=1; int i,u;
    for(i=0;i<adj[s].size();i++)
    {
        u=adj[s][i];
        if(vis[u]==0)
        {
            dfs(u);
        }
    }
    st.push(s);
}
void cl()
{
    for(int i=1;i<=20;i++)
    {
        adj[i].clear();vis[i]=0;
    }
}
int main()
{
    int t,n,m,i,u,v,x,cnt=0,j=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m); cl(); cnt=0;
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&u,&v);
            adj[u].push_back(v);
            if(i==1)
              x=u;
        }
        dfs(x);
        memset(vis,0,sizeof(vis));
        while(!st.empty())
        {
            x=st.top(); st.pop();
            if(vis[x]==0)
            {
                cnt++;
                dfs(x);
            }

        }
        printf("Case %d: %d\n",j++,cnt);
    }
}

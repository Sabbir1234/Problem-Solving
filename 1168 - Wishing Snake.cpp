#include<bits/stdc++.h>
using namespace std;
int vis[10010],in_which[10010],cnt;
vector<int>Adj[10010],Radj[10010],component[10010];

stack<int>st;
void cl()
{
    int i=0;
    for(i=0;i<10009;i++)
    {
   Adj[i].clear();Radj[i].clear();component[i].clear();
    }
}
void coco(int s)
{
    int i,u;cnt++; vis[s]=1;
    for(i=0;i<Adj[s].size();i++)
    {
        u=Adj[s][i];
        if(vis[u]==0)
           coco(u);
    }
}
void dfs(int s)
{
    int u,i; vis[s]=1;
    for(i=0;i<Adj[s].size();i++)
    {
        u=Adj[s][i];
        if(vis[u]==0)
        {
            dfs(u);
        }
    }
    st.push(s);
}
void dfs2(int s,int mark)
{
    int u,i; vis[s]=1; component[mark].push_back(s);
    in_which[s]=mark;
    for(i=0;i<Radj[s].size();i++)
    {
        u=Radj[s][i];
        if(vis[u]==0)
        {
            dfs2(u,mark);
        }
    }
}
int main()
{
    int t,n,k,i,j,a,b,z=1,u,m,v,out_going_edge,mark;
    scanf("%d",&t);
    while(t--)
    {
        map<int,int>mp; memset(in_which,0,sizeof(in_which));
        scanf("%d",&n); cl();
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++)
        {
            scanf("%d",&k);
            for(j=1;j<=k;j++)
            {
                scanf("%d %d",&a,&b);
                Adj[a].push_back(b);
                Radj[b].push_back(a);
                mp[a]=1;mp[b]=1;
            }
        }
        printf("Case %d: ",z++);
        cnt=0; mark=0;

        coco(0);
        if(cnt!=mp.size())
        {
            printf("NO\n");
            continue;
        }
        memset(vis,0,sizeof(vis));
        for(i=0;i<1000;i++)
        {
            if(vis[i]==0)
            {
                dfs(i);
            }
        }
        memset(vis,0,sizeof(vis));
        while(!st.empty())
        {
            u=st.top(); st.pop();
            if(vis[u]==0)
            {
                mark+=1;
                dfs2(u,mark);
            }
        }
        int test=0;
        for(i=1;i<=mark;i++)
        {
            out_going_edge=0;
            for(j=0;j<component[i].size();j++)
            {
                u=component[i][j];
                for(m=0;m<Adj[u].size();m++)
                {
                    v=Adj[u][m];
                    if(in_which[v]!=i)out_going_edge++;

                }
            }
            if(out_going_edge>=2)
            {
                test=1;
                printf("NO\n");
                break;
            }
        }
        if(test==0)
            printf("YES\n");

    }
}

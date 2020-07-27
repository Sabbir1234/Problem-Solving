#include<bits/stdc++.h>
#define ll long long
using namespace std;
stack<int>st;
vector<ll>adj[10010],Radj[10010];
int vis[10010],vis2[10010],mk[10010];
void cl()
{
    int i;
    for(i=0;i<=10000;i++)
    {
        adj[i].clear();
        Radj[i].clear();
        vis[i]=0; vis2[i]=0; mk[i]=-1;
    }
}
void dfs(int s)
{
    int i,u;
    vis[s]=1;
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
void dfs2(int s,int mark)
{
    int i,u;
    vis2[s]=1; mk[s]=mark;
    for(i=0;i<Radj[s].size();i++)
    {
        u=Radj[s][i];
        if(vis2[u]==0)
        {
            dfs2(u,mark);
        }
    }
}
int main()
{
    int n,m,i,j,a,b,u,mark,q; cl();
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        adj[a].push_back(b);
        Radj[b].push_back(a);
    }

    for(i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
        }
    }
    mark=0;
    while(!st.empty())
    {
        u=st.top(); st.pop();
        if(vis2[u]==0)
        {
            ++mark;
            dfs2(u,mark);
        }
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>a>>b;
        if(mk[a]==mk[b])
        {
            printf("1\n");
        }
        else
            printf("0\n");
    }
}

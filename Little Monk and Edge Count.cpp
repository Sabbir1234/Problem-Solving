#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>edge;
vector<int>v[100010];
int vis[100010],cnt=0,cnt2=0;
void dfs(int s,int p)
{
    int u,i;
    vis[s]=1;
    if(s==p)
    {
        return;
    }
    cnt++;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(vis[u]==0)
        {
            vis[u]=1;
            dfs(u,p);
        }
    }

}
int main()
{
    int n,q,i,j,a,b,qu;
    cin>>n>>q;
    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        edge.push_back(make_pair(a,b));
    }
    for(i=1;i<=q;i++)
    {
        cnt=0;
        cnt2=0;
        memset(vis,0,sizeof(vis));
        cin>>qu;
        dfs(edge[i-1].first,edge[i-1].second);
        cnt2=cnt;
        cnt=0;
        dfs(edge[i-1].second,edge[i-1].first);
        cnt=cnt*cnt2;
        printf("%d\n",cnt);
    }
}

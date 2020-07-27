#include<bits/stdc++.h>
using namespace std;
vector<int>v[300006];
int vis[300006], cc[300006];
int dfs(int s)
{
    int i,u;  vis[s]=1;  int cnt=1;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(vis[u]==0)
        {
            vis[u]=1;
            cnt+=dfs(u);
        }
    }
    return cc[s]=cnt;

}
int main()
{
    int n,a,b,i,j,x,y,res;
    memset(vis,0,sizeof(vis));
    cin>>n>>a>>b;
    for(i=1;i<n;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);

    }
    dfs(a); x=cc[b]; memset(vis,0,sizeof(vis)); dfs(b);y=cc[a];
    res= (n*(n-1));
    printf("%d\n",res-(x*y));
}

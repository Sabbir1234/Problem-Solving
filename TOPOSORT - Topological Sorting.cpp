#include<bits/stdc++.h>
using namespace std;
vector<int>v[10010]; vector<int>ans;
stack<int>q;
int visited[10010]; int in[10010],cnt;
void dfs(int s)
{
    int u,i,j;
    visited[s]=1;ans.push_back(s);
    cnt++;
    for(i=0;i<v[s].size();i++)
    {
        sort(v[s].begin(),v[s].end()); u=v[s][i]; in[u]-=1;
        if(visited[u]==0 && in[u]==0)
        {
            visited[u]=1;
            dfs(u);
        }
    }
}
int main()
{
    int n,m,i,j,x,y;
    cnt=0;
    memset(visited,0,sizeof(visited));
    memset(in,0,sizeof(in));
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
        in[y]+=1;

    }
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0 && in[i]==0)
        {
            //ans.push_back(i);
            dfs(i);
        }
    }
   if(ans.size()==n)
   {
       for(i=0;i<ans.size();i++)
       {
           printf("%d ",ans[i]);
       }
       printf("\n");
   }
   else
    printf("Sandro fails.\n");

}

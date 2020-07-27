#include<bits/stdc++.h>
using namespace std;
vector<int>vec[50009];
int vis[50009]={0},m,ar[50009]={1},flag=2,y=0,leaf[50009]={0};
void dfs(int s,int x)
{
    int u;
    vis[s]=1;
    m++;
    for(int i=0;i<vec[s].size();i++)
    {
        u=vec[s][i];
        if(vis[u]==0)
        {
            leaf[x]++;
            vis[u]=1;
            dfs(u,x);
            //leaf[u]=y++;
            vis[u]=0;
        }

    }
}
void cl()
{
    for(int i=0;i<50009;i++)
     vec[i].clear();
}
int main()
{
    int n,t,i,j,ans,h,k,u,v;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        //memset(vis,0,sizeof(vis));
        cl();
        ans=-1000,h=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>u>>v;
            vec[u].push_back(v);
        }
        for(k=1;k<=n;k++)
        {
            m=0;
           dfs(k,k);
           vis[k]=0;
           /*if(ans<m)
           {
               ans=m;
               h=k;
           }*/
           printf("k=%d leaf=%d\n",k,leaf[k]);

        }
        printf("Case %d: %d\n",i,h);
}
}

#include<bits/stdc++.h>
using namespace std;
int mat[102][102];
char yn[102][102];
vector<int>v[102];
int visited[102];
int vis[102];
void dfs(int s)
{
    visited[s]=1;
    int i,u;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(visited[u]==0)
        {
            visited[u]=1;
            dfs(u);
        }
    }
}
void dfs1(int s,int p)
{
    int i,u;
    vis[s]=1;
    yn[p][s]='N';
    if(s==p)
      {
         yn[p][p]='Y';
         return;
      }
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(vis[u]==0)
        {
            vis[u]=1;
            dfs1(u,p);
        }
    }
}
int main()
{
    int t,n,i,j,k=1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        memset(visited,0,sizeof(visited));

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j])
                v[i].push_back(j);
            }
        }
        dfs(0);
        for(i=0;i<n;i++)
        {
            memset(vis,0,sizeof(vis));
            if(visited[i]==0)
            {
                yn[i][i]='Y';
                for(j=0;j<n;j++)
                {
                    if(j!=i)
                    {
                        yn[i][j]='N';
                    }
                }
            }
            else
            {
                dfs1(0,i);
                yn[i][i]='Y';
            }
        }
        printf("Case %d:\n",k++);
        for(i=0;i<n;i++)
        {
            printf("+---------+\n");
            printf("|");
            for(j=0;j<n;j++)
            {
                if(yn[i][j]!='N')
                    yn[i][j]='Y';
                printf("%c|",yn[i][j]);
            }
            printf("\n");
        }
        printf("+---------+\n");

    }
}

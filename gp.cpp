#include<bits/stdc++.h>
using namespace std;
vector<int>v[100009];
queue<int>q;
int visited[100009]={0};
int color[100009]={0};int m=-109999;
int mat[10009][10009];
int a[100009];
int b[100009];
void bfs(int s)
{
    int n,i,u,b;
    visited[s]=1;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();n=1;
        for(i=0;i<v[u].size();i++)
        {
            b=v[u][i];
            if(visited[b]==0)
            {
                visited[b]=1;
                q.push(b);
                if(color[u]==n)
                {
                    n++;
                    if(m<=n)
                        m=n;
                }
                color[b]=n;
                color[u]=n;
                mat[u][b]=mat[b][u]=n;

            }
        }
        q.pop();
    }

}
int main()
{
    int n,i,j,aa,bb;
    memset(visited,0,sizeof(visited));

    cin>>n;
    for(i=1;i<n;i++)
    {
        cin>>aa>>bb;
        v[aa].push_back(bb);
        v[bb].push_back(aa);
        a[i]=aa;b[i]=bb;
    }
    bfs(1);
    printf("%d\n",m);
    for(i=1;i<n;i++)
    {
        printf("%d\n",mat[a[i]][b[i]]);
    }
}

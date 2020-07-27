#include<bits/stdc++.h>
using namespace std;
vector<int>v[10010],st;
int vis[10010],test;
void dfs(int s)
{
    int i,j,u;
    vis[s]=1;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i];
        if(vis[u]==0)
        {
            vis[u]=1;
            dfs(u);
        }
    }
    if(test)
    st.push_back(s);

}
void cl()
{
    int i;
    for(i=1;i<=10010;i++)
    {
        v[i].clear();
        vis[i]=0;
    }
}
int main()
{
    int t,n,m,i,j,a,b,x=1,cnt,k;
    scanf("%d",&t);
    while(t--)
    {
        cl();cnt=0;k=0;
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++)
        {
            scanf("%d %d",&a,&b);
            v[a].push_back(b);

        }
        test=1;
        for(i=1;i<=n;i++)
        {
            if(vis[i]==0)
            {
                dfs(i);
            }
        }
        test=0; for(i=1;i<=10010;i++) vis[i]=0;
        for(i=st.size()-1;i>=0;i--)
        {
            if(vis[st[i]]==0)
            {
                cnt++;
                dfs(st[i]);
            }
        }
      printf("%d\n",x++,cnt);
      st.clear();
    }
}

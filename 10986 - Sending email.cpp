#include<bits/stdc++.h>
using namespace std;
#define inf 1<<30
vector<pair<int,int>>v[20009];
int dis[20009];
struct node{
     int u,c;
      node(int _u,int _c)
      {
          u=_u;
          c=_c;
      }
      bool operator < (const node &p) const { return c>p.c; }

};
void dijkstra(int no,int s,int t)
{
    int i,u,d,w,n,x;
    for(i=0;i<no;i++)
        dis[i]=inf;
    priority_queue<node>q;
    q.push(node(s,0));
    dis[s]=0;
    while(!q.empty())
    {
        node p=q.top();
        q.pop();
        u=p.u;
        for(i=0;i<v[u].size();i++)
        {
           x=v[u][i].first;
           w=v[u][i].second;
           if(dis[u]+x<dis[w])
           {
               dis[w]=dis[u]+x;
               q.push(node(w,dis[w]));
           }
        }

    }
}
void cl()
{
    for(int i=0;i<20009;i++)
        v[i].clear();
}
int main()
{
    int t,n,m,s,N,i,j,x,y,w;
    cin>>N;
    for(i=1;i<=N;i++)
    {

        cin>>n>>m>>s>>t;
        for(j=1;j<=m;j++)
        {
            cin>>x>>y>>w;
            v[x].push_back(make_pair(w,y));
            v[y].push_back(make_pair(w,x));
        }
        dijkstra(n,s,t);
        if(dis[t]==inf)
            printf("Case #%d: unreachable\n",i);
        else
            printf("Case #%d: %d\n",i,dis[t]);
        cl();
    }
}

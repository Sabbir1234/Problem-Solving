#include<bits/stdc++.h>
using namespace std;
#define pi pair<int,pair<int,int>>
map<string,int>mp;
pair<int,pair<int,int>>p[20000];
vector<pair<int,int>>v1[500];
int m,vis[500],we=0,r,flag;
bool compare(const pair<int,pair<int,int>>&i ,const pair<int,pair<int,int>>&j)
{
    return i.first>j.first;
}
int parent[500];
void init()
{
    for(int i=0;i<500;i++)
    {
        parent[i]=i;
    }
}
int root(int n)
{
    if(parent[n]==n)
        return n;
    else
    {
        parent[n]=root(parent[n]);
        return parent[n];
    }
}
void un(int x,int y)
{
    x=root(x);
    y=root(y);
    parent[x]=parent[y];
}
void kruskal(pair<int,pair<int,int>> p[])
{
    int x,y,i,cost;
    long long minimum=0;
    for(i=0;i<m;i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if(root(x)!=root(y))
        {
            //minimum+=1;
            un(x,y);
            v1[x].push_back(make_pair(y,cost));
            v1[y].push_back(make_pair(x,cost));
        }
    }
}
void dfs(int s,int f)
{
    int i,u;
    vis[s]=1;
    //printf("%d\n",s);
    if(s==f)
      {
          flag=2;
          //we=100000;
          return;
      }
    for(i=0;i<v1[s].size();i++)
    {
        u=v1[s][i].first;
        if(vis[u]==0)
        {

            vis[u]=1;
            if(flag==2)
           {
               continue;
           }
           dfs(u,f);
           we=min(we,v1[s][i].second);
            //printf("we %d\n",we);

        }
    }

}
void cl()
{
    for(int i=0;i<500;i++)
        v1[i].clear();
}
int main()
{
    int n,i,c,res=0,k,j=1;
    string a,b;
    while(scanf("%d %d",&n,&m)==2)
    {
        init();
        mp.clear();
        cl();
        memset(vis,0,sizeof(vis));
        k=1;flag=1;
        we=10009;
        if(n==0 && m==0)
            break;

        for(i=0;i<m;i++)
        {
            cin>>a>>b>>c;
            if(!mp[a])
            {
                mp[a]=k++;
            }
            if(!mp[b])
            {
                mp[b]=k++;
            }
            p[i]=make_pair(c,make_pair(mp[a],mp[b]));
        }
        sort(p,p+m,compare);
        kruskal(p);
        cin>>a>>b;
        r=mp[a];
        dfs(mp[a],mp[b]);
        printf("Scenario #%d\n",j++);
        printf("%d tons\n",we);
        printf("\n");

    }
}

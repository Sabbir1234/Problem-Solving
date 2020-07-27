#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
pair<int,pair<int,int>>p[1000];
vector<pair<int,int>>v[20009];
int par[500],m,ma=200000,vis[500],ans=0,adj[200][200];
void init()
{
    int i;
    for(i=0;i<499;i++)
    {
        par[i]=i;
    }
}
int root(int x)
{
    if(par[x]==x)
        return x;

    else
    {
        par[x]=root(par[x]);
        return par[x];
    }

}
void uni(int x,int y)
{
    int p=root(x);
    int q=root(y);
    par[p]=par[q];
}
void kru(pair<int,pair<int,int>>p[])
{
    int i,ans,x,y,cost;
    for(i=0;i<m;i++)
    {
        x=p[i].second.first;
        y=p[i].second.second;
        cost=p[i].first;
        if(root(x)!=root(y))
        {
            uni(x,y);
            v[x].push_back(make_pair(y,cost));
            //v[y].push_back(make_pair(x,cost));
        }
    }

}
void dfs(int s,int e)
{
    int i,u;
    printf("%d\n",s);
    if(s==e)
        return;
    vis[s]=1;
    for(i=0;i<v[s].size();i++)
    {
        u=v[s][i].first;
        if(vis[u]==0)
        {
            ans=min(ma,v[s][i].second);
            ma=ans;
            vis[u]=1;
            dfs(u,e);
        }
    }
}
int main()
{
    string s1,s2;
    int i,j,w,mini,k,n,f=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        ++f;
        memset(par,0,sizeof(par));
        mp.clear();
        ans=0;
        ma=20000;
        memset(vis,0,sizeof(vis));
        if(n==0 && m==0)
            break;
        k=1;
        mini=0;
        init();
        //cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>s1>>s2>>w;
            if(mp[s1] && mp[s2] && w<=adj[mp[s1]][mp[s2]])
            {
                continue;
            }
            if(!mp[s1])
            mp[s1]=k++;
            if(!mp[s2])
            mp[s2]=k++;
            adj[mp[s1]][mp[s2]]=w;
            adj[mp[s2]][mp[s1]]=w;
            p[i]=make_pair(w,make_pair(k-2,k-1));
            p[i]=make_pair(w,make_pair(k-1,k-2));
        }
        sort(p,p+m);
        kru(p);
        cin>>s1>>s2;
        //printf("%d %d\n",mp[s1],mp[s2]);
        dfs(mp[s1],mp[s2]);
        printf("Scenario #%d\n",f);
        printf("%d\n",ans);
        for(i=0;i<100;i++)
            v[i].clear();

    }
}

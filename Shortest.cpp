#include<bits/stdc++.h>
using namespace std;
vector<int>adj[10001];
int mem[10001];
void cl()
{
    for(int i=1;i<=10000;i++)
    {
        mem[i]=-5;
    }
}
int f(int u,int n)
{
    int v,i,ans;
    if(adj[u].size()==0) return 0;
    if(mem[u]!=-5) return mem[u];
    ans = 100000;
    for(i=0;i<adj[u].size();i++)
    {
        ans = min(ans,f(adj[u][i],n)+1);
    }
    mem[u]=ans;
    return mem[u];
}
int main()
{
    int t,n,i,j,m;
    cin>>t;
    while(t--)
    {
        cin>>n; cl();
        for(i=1;i<=n;i++)
        {
            j = i+1;
            if(j<=n) {  adj[i].push_back(j);  }
            j = 3*i;
            if(j<=n) {  adj[i].push_back(j); }
        }
        int res = f(1,n);
        printf("%d\n",res);
        printf("%d\n",mem[4]);
        printf("%d\n",mem[1]);

    }
}

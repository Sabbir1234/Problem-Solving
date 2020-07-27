#include<bits/stdc++.h>
using namespace std;
vector<int>v[100010];
vector<pair<int,int>>pairs;
int cc[100010];
int visited[100010];
int dfs(int src) {
    visited[src]=1;
    int cnt =1;

    for(int i=0;i<v[src].size();i++)
    {

        if(visited[v[src][i]]==0)
        {
            cnt+=dfs(v[src][i]);
            visited[v[src][i]]=1;
        }

    }
    return cc[src]=cnt;


}

int main() {
    long long n,m,q,i,a,b,res=0,qu;

    memset(visited,0,sizeof(visited));
    cin>>n>>q;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b;
        pairs.push_back(make_pair(a,b));
        v[a].push_back(b);
        v[b].push_back(a);
    }
    dfs(1);
    for(i=1;i<=q;i++)
    {
        cin>>qu;
        a=pairs[qu-1].first;
        b=pairs[qu-1].second;
        if(cc[a]>cc[b])
        {
            a=n-cc[b];
            b=cc[b];
            res=(n*(n-1))/2 - (a*(a-1))/2 - (b*(b-1))/2;
            //printf("%lld\n",res);
        }
        else
        {
            a=n-cc[a];
            b=cc[a];
            res=(n*(n-1))/2 - (a*(a-1))/2 - (b*(b-1))/2;
            //printf("%lld\n",res);
        }
        printf("%lld\n",res);
    }

}

#include<bits/stdc++.h>
using namespace std;
int parent[100009],sz[100009];
void init()
{
    int i;
    for(i=1;i<=100009;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
}
int root(int i)
{
    if(parent[i]==i)
        return i;
    else
    {
        parent[i]=root(parent[i]);
        return parent[i];
    }
}
void unionfnd(int a,int b)
{
    a=root(a);
    b=root(b);
    if(sz[a]>sz[b])
    {
        parent[b]=parent[a];
        sz[a]+=sz[b];

    }
    else
    {
        parent[a]=parent[b];
        sz[b]+=sz[a];
    }
}
int main()
{
    int n,m,i,j,a,b;
    cin>>n>>m;
    init();
    for(i=1;i<=m;i++)
    {
        cin>>a>>b;
        if(root(a)!=root(b))
          unionfnd(a,b);
    }
    for(j=1;j<=n;j++)
    {
        printf("%d ",sz[parent[j]]-1);
    }
    printf("\n");
}

#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
int parent[5009],sz[9000],x;
void init()
{
    int i;
    for(i=1;i<=5009;i++)
    {
        parent[i]=i;
        sz[i]=1;
    }
}
int root(int a)
{
    if(parent[a]==a)
    {
        return a;
    }
    else
    {
        parent[a]=root(parent[a]);
        return parent[a];
    }
}
void union_find(int a,int b)
{
    a=root(a);
    b=root(b);
    if(a!=b)
    {
        if(sz[a]>sz[b])
        {
           parent[b]=parent[a];
           sz[a]+=sz[b];
           x=max(x,sz[a]);
        }
        else
        {
            parent[a]=parent[b];
            sz[b]+=sz[a];
            x=max(x,sz[b]);
        }
    }
}
int main()
{
    int c,r,i,j,k;
    freopen("output.txt","w",stdout);
    string s1,s2,s;
    while((scanf("%d %d",&c,&r))==2)
    {
        k=1,x=1;
        init();
        if(c==0 && r==0)break;
          getchar();
        for(i=1;i<=c;i++)
        {

            cin>>s;
            if(mp.find(s)==mp.end())
            {
                mp[s]=k++;
            }

        }
        //getchar();
        for(i=1;i<=r;i++)
        {
            cin>>s1;
            cin>>s2;
            union_find(mp[s1],mp[s2]);
        }
        printf("%d\n",x);
        mp.clear();
       //printf("\n");


    }
}

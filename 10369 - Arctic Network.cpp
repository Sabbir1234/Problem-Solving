#include<bits/stdc++.h>
using namespace std;
#define pi pair<double,pair<int,int>>
pi edge[250000];
int ax[509],ay[509],parent[509],sz;
int root(int x)
{
    if(parent[x]==x)
        return x;
    else
    {
        parent[x]=root(parent[x]);
        return parent[x];
    }
}
void un(int a,int b)
{
    a=root(a);
    b=root(b);
    parent[a]=parent[b];
    sz--;
}
void init(int n)
{
    for(int i=0;i<n;i++)
        parent[i]=i;
     sz=n;
}
int getsz()
{
    return sz;
}
int main()
{
    int n,i,j,s,p,x,y,f,k,z;
    double dis,d;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        f=0;d=0.0;
        cin>>s>>p;
        init(p);
        for(j=0;j<p;j++)
        {
            cin>>x>>y; ax[j]=x; ay[j]=y;
            for(k=0;k<j;k++)
            {
                dis=sqrt((ax[j]-ax[k])*(ax[j]-ax[k]) + (ay[j]-ay[k])*(ay[j]-ay[k]));
                edge[f++]=make_pair(dis,make_pair(j,k));
            }
        }
        sort(edge,edge+f);
        for(z=0;getsz()>s;z++)
        {
            x=edge[z].second.first;
            y=edge[z].second.second;
            dis=edge[z].first;
            if(root(x)!=root(y))
            {
                un(x,y);
                d=max(d,dis);
            }
        }
        printf("%.2f\n",d);
    }
}

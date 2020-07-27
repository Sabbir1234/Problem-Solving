#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define pi pair<double,pair<int,int>>
pair<double,pair<int,int>>p[10009];
int parent[101];
struct node{
  double x,y;
};
void init()
{
    for(int i=0;i<101;i++)
        parent[i]=i;
}
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
}
float kruskal(pi p[],int k)
{
    int i,a,b;
    float cost=0,minimum=0.0;
    for(i=0;i<k;i++)
    {
        a=p[i].second.first;
        b=p[i].second.second;
        cost=p[i].first;
        if(root(a)!=root(b))
        {
            un(a,b);
            //printf("cost %f\n",cost);
            minimum+=cost;
        }
    }
    return minimum;
}
int main()
{
    //freopen("min.txt","w",stdout);
    int n,t,i,k,j,l=1;
    double a,b,dis,minimum,x1,x2,y1,y2;
    cin>>t;
    int m=t;
    //cout<<endl;
    while(t--)
    {
        struct node no[101];
        memset(no,0,sizeof(node));
        //cout<<endl;
        cin>>n;
        k=0;minimum=0.0;
        init();
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            no[i].x=a;
            no[i].y=b;
            for(j=0;j<i;j++)
            {
                x1=no[i].x;x2=no[j].x;
                y1=no[i].y;y2=no[j].y;
                dis=sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
                p[k++]=make_pair(dis,make_pair(i,j));
            }

        }
        sort(p,p+k);
        minimum=kruskal(p,k);
        printf("%.2f\n",minimum);
        if(l<m)
        cout<<endl;
        l++;

    }
}

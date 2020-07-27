#include<bits/stdc++.h>
using namespace std;
map<pair<int, int>, int> vis;
int n,cap;
int cost[101],weight[101];
int func(int i,int w)
{
    int p1,p2;
    if(vis[{ i, w }])
        return vis[{ i, w }];
    if(i==n+1)
    {
        vis[{ i, w }] = 0;
        return 0;
    }

    if(w+weight[i-1]<=cap)
     {
         p1 =cost[i-1] + func(i+1,w + weight[i-1]);
     }
    else
        p1=0;

      p2 = func(i+1,w);

       vis[{ i, w }] = max(p1,p2);

    return vis[{ i, w }];

}

int main()
{
    int w,i,a,b,ans=0;
    cin>>n>>cap;
    for(i=0;i<n;i++)
    {
        cin>>cost[i]>>weight[i];
    }
    ans=func(1,0);
    printf("%d\n",ans);
}

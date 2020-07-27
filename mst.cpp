#include<bits/stdc++.h>
using namespace std;
struct edge{
    int u ,v,w;
   edge(int uu,int vv,int ww){
      u=uu;v=vv;w=ww;
   }
   bool operator < (const edge e) const {
        return w < e.w;
    }
};
vector<edge>edges;
int main()
{
    int t,i,j,n,m,w,A,u,v;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>A;
        for(i=0;i<m;i++)
        {
            cin>>u>>v>>w;
            edges.push_back(edge(u,v,w));
        }
        sort(edges.begin(),edges.end());
        for(i=0;i<edges.size();i++)
        {
            cout<<edges[i].w<<endl;
        }
    }
}

#include<stdio.h>
#include<vector>
#define Max 1000
using namespace std;
int main()
{
    int i,node,edge,x,y,j,k;
    vector<int>edges[Max];
    scanf("%d %d",&node,&edge);
    for(i=0;i<edge;i++)
    {
        scanf("%d %d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
    }
    for(k=0;k<node;k++)
    {
        //int d=edges[i];
        //int s=d.size();
        for(j=0;j<edges[k].size();j++)
        {
            printf("%d number node is connected with %d\n",k,edges[k][j]);
        }
    }
}

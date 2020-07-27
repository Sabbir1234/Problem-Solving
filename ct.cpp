#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int x,y,e,n,i;
    vector<int>v1[100];
    scanf("%d %d",&n,&e);
    for(i=0;i<e;i++)
    {
        scanf("%d %d",&x,&y);
        v1[x].push_back(y);
        v1[y].push_back(x);
    }
    printf("%d\n",v1[1][4]);

}

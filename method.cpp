#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int n,i,t;
bool myfun(int a,int b)
{
    return a>b;
}
int main()
{
    vector<int>v1;
    vector<int>v2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        v1.push_back(t);
    }
    v2=v1;
    sort(v2.begin(),v2.end(),myfun);
    for(i=0;i<n;i++)
        printf("%d\n",v2[i]);


 return 0;
}

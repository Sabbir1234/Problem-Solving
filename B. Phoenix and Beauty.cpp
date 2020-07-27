#include<bits/stdc++.h>
using namespace std;
vector<int>v;
bool foo[101];
int main()
{
    int t,n,i,j,k,x,a;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;int cnt=0; memset(foo,0,sizeof(foo));
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(foo[a])
            {
                continue;
            }
            else
            {
               v.push_back(a);
               cnt++; foo[a]=1;
            }
        }
        if(cnt>k)
            printf("-1\n");
        else
        {
           x=k-cnt;
           for(i=1;i<=x;i++)v.push_back(1);
           printf("%d\n",n*k);
           for(i=0;i<n;i++)
           {
               for(j=0;j<v.size();j++)
               {
                   printf("%d ",v[j]);
               }
           }
           printf("\n");
        }
        v.clear();
    }
}

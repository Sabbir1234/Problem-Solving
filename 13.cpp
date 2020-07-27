#include<bits/stdc++.h>
using namespace std;

map<int,int>mp;
int main()
{
    int t,i,j,n,m,cab,u,v,a,b;
    cin>>t;
    while(t--)
    {

        cin>>m>>cab;
        for(i=0;i<m;i++)
        {
            cin>>u>>v;
            mp[u]=1;
            mp[v]=1;
        }
        printf("%d\n",mp.size()-1);

    }
}

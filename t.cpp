#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,j,a,b,m=-10000,sum=0,k=1;;
    cin>>t;
    while(t--)
    {
        cin>>n;sum=0;m=-100000;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            sum+=a;
            if(m<=a) m=a;
        }
        for(i=1;i<n;i++)
           cin>>a>>b;
        if(sum<m)printf("Case %lld: -1\n",k++);
        else
            printf("Case %lld: %lld\n",k,sum);
    }
}

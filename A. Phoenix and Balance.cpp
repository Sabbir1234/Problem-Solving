#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[32];
void cl()
{
    ll i,ans=1;
    for(i=1;i<=30;i++)
    {
        ans= ans*2;
        ar[i]=ans;
    }
}
int main()
{
    ll t,n,i,j,x,sum2,sum1;
    cin>>t; cl();
    while(t--)
    {
        cin>>n;
        x=n/2;  sum2=0; sum1=ar[n];
        for(i=n-1,j=1;j<=x;i--,j++)
        {
            sum2+=ar[i];
        }
        for(j=1;j<=i;j++)
        {
            sum1+=ar[j];
        }
        printf("%lld\n",sum1-sum2);
    }
}

#include<bits/stdc++.h>
using namespace std;
int dp[1000];

long long bino(int n)
{
    long long x;
    if(dp[n]!=-1)
        return dp[n];
    if(n==1)
        return 1;
    else
    {
        dp[n]=bino(n-1)*n;
        return dp[n];
    }
}
int main()
{
    int n,r;
    cin>>n>>r;
    memset(dp,-1,sizeof(dp));
    long long x=bino(n)/(bino(n-r)*bino(r));
    printf("%lld\n",x);
}

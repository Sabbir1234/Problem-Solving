#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[10000][10000]={0};
ll recpow(int a,int b)
{
    ll x;
    if(b==0 || b==1)
    {
        dp[a][b]=a;
        return dp[a][b];
    }
    else if(b%2!=0)
    {
        dp[a][b]=a*recpow(a,b-1);
       return dp[a][b];
    }
    else
    {
        dp[a][b/2]=recpow(a,b/2);
        dp[a][b]=dp[a][b/2]*dp[a][b/2];
        return dp[a][b];
    }
}
int main()
{
    int a,b;
    cin>>a>>b;
    long long res=recpow(a,b);
    printf("%lld\n",res);

}

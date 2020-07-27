#include<bits/stdc++.h>
#define ll long long
#define m 50000
using namespace std;
vector<ll>p;
bitset<50009>bs;
void seive()
{
    ll i,j;
    bs.set();bs[0]=bs[1]=0;
    //p.push_back(2);
    for(i=2;i<=m;i++)
    {
        if(bs[i])
        {
            p.push_back(i);
            for(j=i*i;j<=m;j+=i)
                bs[j]=0;
        }
    }
}
bool isPrime(ll n)
{
    ll i;
    if(n<=m)return bs[n];
    for(i=0;i<p.size();i++)
    {
        if(n%p[i]==0)return false;
    }
    return true;
}
int main()
{
   ll n,i,j,p,q;
    seive();
    while(scanf("%llu",&n))
    {
        if(n==0)break;
        p=pow(2,n)-1;
        if(isPrime(p))
        {
            q=pow(2,n-1);
            printf("Perfect: %lld!\n",p*q);
        }
        else
        {
            if(isPrime(n))
                printf("Given number is prime. But, NO perfect number is available.\n");
            else
                printf("Given number is NOT prime! NO perfect number is available.\n");

        }
    }
}

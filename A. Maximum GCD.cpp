#include<bits/stdc++.h>
#define ll long long
using namespace std;
bitset<1009>bs;
vector<ll>prime;
void init(ll n)
{
    ll i,j;
    bs.set();
    bs[0]=bs[1]=0;
    for(i=2;i<=n;i++)
    {
        if(bs[i])
        {
          for(j=i*i;j<=n;j+=i)
          {
               bs[j]=0;
          }
            prime.push_back(i);
        }

    }
}
bool isPrime(ll n)
{
    if(n<=1000) return bs[n];
    for(ll i=0;i<prime.size();i++)
    {
        if(n%prime[i]==0) return false;
    }
    return true;
}
int main()
{
    ll t,n,i,k,j;

    init(1000);

    cin>>t;
    while(t--)
    {
        cin>>n; k=1; int flag=0;
        for(i=n;i>=1;i--)
        {
            if(isPrime(i))
            {
                continue;
            }
            else
            {
                k = max(k,i/2);
                break;
            }
        }
        printf("%lld\n",k);
    }
}

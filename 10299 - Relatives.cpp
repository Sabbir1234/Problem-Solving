#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool prime[33000]={true};
vector<ll>v;
void seive(ll n)
{
    ll i,j;   prime[0]=false; prime[1]=false; prime[2]=true;
    for(i=2;i<=n;i++)
    {
        if(prime[i]==true)
        {
            v.push_back(i);
            for(j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
}
bool isPrime(ll n)
{
    ll i;
    if(n<=32999) return prime[n];
    for(i=0;i<v.size();i++)
    {
        if(n%v[i]==0) return false;
    }
    return true;
}
void af()
{
    for(int i=0;i<=32999;i++)
        prime[i]=true;
}
/*ll phi (ll n) {
  ll ret = n;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      while (n % i == 0) {
        n /= i;
      }
      ret -= ret / i;
    }
  }
  // this case will happen if n is a prime number
  // in that case we won't find any prime that divides n
  // that's less or equal to sqrt(n)
  if (n > 1) ret -= ret / n;
  return ret;
}*/
int main()
{

    af();
    seive(33000);
    ll n,pf,p,ret,i,x;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        ret=n;
        x=n;
        if(n==1)printf("0\n");
        else{
        for(i=0;i<v.size(),v[i]*v[i]<=x;i++)
        {
            if(x%v[i]==0)
            {
                ret-=ret/v[i];
            }

        }
        if(isPrime(n))
            ret-=ret/n;

         printf("%lld\n",ret);
        }

    }

}

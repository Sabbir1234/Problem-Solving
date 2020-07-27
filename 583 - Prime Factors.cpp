#include<bits/stdc++.h>
#define ll long long
#define mx 50000
using namespace std;
bitset<50000>bs;
vector<ll>v;
void seive()
{
    ll i,j;
    bs.set();
    bs[0]=bs[1]=0;
    for(i=2;i<=mx;i++)
    {
        if(bs[i])
        {
            v.push_back(i);
            for(j=i*i;j<=mx;j+=i)
            {
                bs[j]=0;
            }
        }
    }
}
bool isPrime(ll n)
{
    ll i;
    if(n<=mx) return bs[n];
    for(i=0;i<v.size(),v[i]*v[i]<=n;i++)
    {
        if(n%v[i]==0) return false;
    }
    return true;
}
int main()
{
    ll n,i,pf,x,k=0;
    seive();
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        printf("%lld = ",n);
        if(n<0)
          {printf("-1 x ");n=n*(-1);}
        if(isPrime(n))
        {
            printf("%lld\n",n);
            continue;
        }
        i=0;pf=v[i];
        while(pf*pf<=n)
        {
            while(n%pf==0)
            {
                printf("%lld",pf);
                n/=pf;
                if(n!=1)
                    printf(" x ");
            }
            pf=v[++i];
        }
        if(n!=1)
            printf("%lld\n",n);
        else
            printf("\n");
    }

}

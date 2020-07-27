#include<bits/stdc++.h>
#define ll long long
#define mx 10000010
using namespace std;
bitset<10000010>bs;
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
    ll n,i,pf,x,k=0,flag=0,cnt;
    seive();
    while(scanf("%lld",&n)==1)
    {
        if(n==0)break;
        i=0;pf=v[i];cnt=0;
        while(pf*pf<=n)
        {
            flag=0;
            while(n%pf==0)
            {
                flag=1;
                x=pf;
                n/=pf;
            }
            if(flag)
                cnt++;
            pf=v[++i];
        }
        if(n!=1){cnt++;x=n;}
        if(cnt>1)
         printf("%lld\n",x);
        else
            printf("-1\n");

    }

}

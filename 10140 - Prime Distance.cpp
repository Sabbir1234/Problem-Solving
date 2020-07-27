#include<bits/stdc++.h>
#define ll long long
#define vi vector<ll>
using namespace std;
bitset<10000010>bs;
bitset<10000019>ps;
vi primes,seg;
ll seive_size;
void seive(ll upperbound)
{
    ll j;
    seive_size=upperbound+1;
    bs.set();bs[0]=0;bs[1]=0;
    primes.push_back(2);
    for(ll i=3;i<=seive_size;i+=2)
        if(bs[i])
    {
        primes.push_back(i);
        for(j=i*i;j<=seive_size;j+=i)bs[j]=0;
    }
}
bool isPrime(ll n)
{
    ll i;
    if(n<=primes.size())return bs[n];
    for(i=0;i<primes.size();i++)
    {
        if(n%primes[i]==0)return true;
    }
    return false;
}
void segment(ll l,ll u)
{
    ll curPrime,i,j,base;
    ps.set();
    if(l==1)ps[0]=0;
    for(i=0;i<primes.size();i++)
    {
        curPrime=primes[i];
        base=curPrime*curPrime;
        if(base<l)
        {
            base=((curPrime+l-1)/curPrime)*curPrime;
        }
        for(j=base;j<=u;j+=curPrime)
        {
            ps[j-l]=0;
        }
    }
}
int main()
{
    ll i,j,m,M,a,b,A,B,flag,x,l,u;
    seive((ll)sqrt(2147483647));
    while(scanf("%lld %lld",&l,&u)==2)
    {
        segment(l,u); m=2147483649;M=-19900;a=0;b=0;A=0;B=0;flag=0;
        for(i=l,j=0;i<=u;i++,j++)
        {
            if(ps[j])
            {
                seg.push_back(i);
            }
            if(seg.size()==2)
            {
                flag=3;
                if(seg[1]-seg[0]<m)
                {
                    m=seg[1]-seg[0];
                    a=seg[0];b=seg[1];
                }
                if(seg[1]-seg[0]>M)
                {
                    M=seg[1]-seg[0];A=seg[0];B=seg[1];
                }
                x=seg[1];seg.clear();
                seg.push_back(x);
            }
        }
        if(flag)
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,A,B);
        else
            printf("There are no adjacent primes.\n");
        seg.clear();

    }
}

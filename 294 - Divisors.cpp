#include<bits/stdc++.h>
#define ll long long
using namespace std;
bitset<40000>bs;
vector<ll>v;
void seive(ll n)
{
    ll i,j;bs.set();bs[0]=0;bs[1]=0;
    v.push_back(2);
    for(i=2;i<=n;i++)
    {
        if(bs[i])
        {
            v.push_back(i);
            for(j=i*i;j<=n;j+=i)
            {
                bs[j]=0;
            }
        }
    }
}
int main()
{
    ll n,i,j,cnt,l,r,m,pf,flag,mm;
    seive(40000);
    while(scanf("%lld",&n)==1)
    {
        cnt=0;m=n;
        if(n==0)break;
        else
        {
            i=0;pf=v[i];
            while(pf*pf<=n)
            {
                flag=0;
                while(n%pf==0)
                {
                    flag=1;
                    n/=pf;
                }
                if(flag)
                    cnt++;
                pf=v[++i];
            }
            if(n!=1)cnt++;
            printf("%lld : %lld\n",m,cnt);
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define p pair<ll,ll>
ll d,x,y;
void ext(ll a,ll b)
{
    ll temp;
    if(b==0)
    {
        d=a;
        x=1;
        y=0;
    }
    else
    {
        ext(b,a%b);
        temp=x;
        x=y;
        y=temp-(a/b)*y;

    }
}
int main()
{
    ll a,b;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        d=0,x=0,y=0;
        ext(a,b);
        printf("%lld %lld %lld\n",x,y,d);
    }
}

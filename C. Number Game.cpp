#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>prime;
ll poo[32009];
void init(ll n)
{
    ll i,j;
    for(i=3;i<=n;i+=2)
    {
        if(poo[i]==1)
        {
            for(j=i*i;j<=n;j+=i)
            {
                poo[j]=0;
            }
            prime.push_back(i);
        }
    }
}
void cl()
{
    ll i;
    for(i=0;i<=32000;i++) poo[i]=1;
}
int main()
{
    ll t,n,i,mx,m,flag;
    cl();
    init(31623);
    cin>>t;
    while(t--)
    {
        cin>>n;
        flag=0;
        while(n>1)
        {
            m=n;
            if(n%2==0)
            {
                mx=-1090;
                for(i=0;prime[i]<=m;i++)
                {
                    if(m%prime[i]==0)
                    {
                        m/=prime[i];
                        mx=prime[i];
                    }
                }
                if(mx>0)
                {
                    flag++;
                    n/=mx;
                }
                else
                {
                    flag++;
                    n--;
                }
            }
            else
            {
                flag++;
                break;
            }
        }
        if(flag%2) printf("Ashishgup\n");
        else
            printf("FastestFinger\n");
    }
}

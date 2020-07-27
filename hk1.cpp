#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool mark[10000009]={false};
vector<ll>v;
void seive()
{
    ll i,j;
    mark[2]=false;

    for(i=2;i<=10000009;i++)
    {
        if(mark[i]==false)
        {
            v.push_back(i);
            for(j=i+i;j<=10000009;j+=i)
            {
                mark[j]=true;
            }
        }
    }
}
ll di(ll n)
{
    ll cnt=0,i,k=2,odd,res=1,x=n;
    for(i=0;i<v.size();i++)
    {
        if(n%v[i]==0)
        {
           odd=1;
            while(n%v[i]==0)
          {
               if(v[i]==2)
               {
                   cnt++;
               }
               else
                odd++;
               n=n/v[i];
          }
          //printf("v[i] %lld odd %lld\n",v[i],odd);
          res*=odd;
        }

    }
    //printf("cnt=%d\n",cnt);
    return res*cnt;
}
int main()
{
    seive();
    //freopen("hkc.txt","w",stdout);

    ll t,n,i;
    //Afor(i=0;i<v.size();i++)printf("%lld ",v[i]);
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
            printf("0\n");
        else
        {
            ll res=di(n);
            printf("%lld\n",res);
        }
    }
}

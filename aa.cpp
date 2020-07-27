#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll,ll>mp;
ll ar[30],data[20],inf[10000],k;
void bin(ll a,ll low,ll high)
{
   ll mid=(low+high)/2;
    if((1<<mid)==a)
    {
        k=mid;
        return ;
    }
    else if( (1<<mid) < a )
    {
        low=mid+1;
        bin(a,low,high);
    }
    else if((1<<mid) >a)
    {
        high=mid-1;
        bin(a,low,high);
    }

}
int main()
{
    ll j,n,q,i,flag,a;
    memset(ar,0,sizeof(ar));
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>n;
        flag=0,k=0;
        memset(data,0,sizeof(data));
        for(j=0;j<n;j++)
        {
            cin>>a;
            if(a>2048)
                continue;
            bin(a,0,11);
            printf("k = %lld\n",k);
                while(data[k])
               {
                data[k+1]=2*data[k];
                data[k]=0;
               }
            else
            {
                data[k]=a;
            }

        }
        printf("%lld %lld %lld\n",data[10],data[9],data[11]);
        if(data[11])
            printf("YES\n");
        else
            printf("NO\n");
    }
}

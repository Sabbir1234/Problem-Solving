#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k; ll ar[40],br[40],sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>br[i];
        }
        sort(ar,ar+n);
        sort(br,br+n,greater<ll>());
        for(i=0;i<k;i++)
        {
            if(br[i]>ar[i])
              sum+=(br[i]-ar[i]);
        }
        printf("%lld\n",sum);
    }
}

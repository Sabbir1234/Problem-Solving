#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[10000009],br[10000009];
int main()
{
    ll t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n; ll cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]<0)
                cnt++;
        }
        for(i=0,j=0,k=1;i<n;i++)
        {
            if(ar[i]>=0 && cnt>0)
            {
                br[j]=ar[i];
                printf("%lld ",br[j]);
                j+=2;
            }
            else if(ar[i]<0 && cnt>0)
            {
                br[k]=ar[i];
                printf("%lld ",br[k]);
                k+=2;
                cnt--;
            }
            else
            {
                br[i]=ar[i];
                printf("%lld ",br[i]);
            }
        }
        printf("\n");
    }
}

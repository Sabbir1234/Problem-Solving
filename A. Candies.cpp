#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n; i=2,sum=3;
        while(1)
        {
            if(n%sum==0)
            {
                i=n/sum;
                break;
            }
            sum+=(i*2);
            i=i*2;
        }
        printf("%lld\n",i);
    }
}

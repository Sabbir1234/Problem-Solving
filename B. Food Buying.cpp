#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n;sum=n;
        while(n>=10)
        {
            sum+=(n/10);
            n=(n/10)+(n%10);
        }
        printf("%lld\n",sum);
    }
}

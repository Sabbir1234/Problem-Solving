#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll bina(ll low,ll high,ll k,ll n)
{
    ll mid,a;
    while(low<=high)
    {
        mid = (low+high)/2;
        a = n*mid - mid ;
        if(a==k)
        {
            return a+mid;
        }
        if(a<k)
        {
            low = mid+1;
        }
        else if(a>k)
        {
            high=mid-1;
        }
    }

}
int main()
{
    ll t,n,k,i,j,low,high;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        low=1;
        high = 10;
        //high=1000000000/n +1;
        low = bina(low,high,k-1,n);

        printf("%lld\n",low+1);

    }
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[200009];
int main()
{
    ll t,n,k,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>k; ll cn=1,x=1;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%k==0)continue;
            else
            {
                j=ceil(a[i]*1.00/k*1.00)*k;
                cn+= (j-a[i])

            }
        }
    }
}

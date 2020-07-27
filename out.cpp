#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[300009];
int main()
{
    //freopen("ot.txt","w",stdout);
    ll n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=0;i<n;i++)
        printf("%lld ",ar[i]);
    printf("\n");
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i;
    cin>>n;
    while(n--)
    {
        cin>>t;
        if(t%4==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

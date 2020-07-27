#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,x,y,t,m;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        m=n-y;
        if(x==0)
            printf("0\n");
        else
        printf("%lld\n",(m/x)*x + y);
    }
}

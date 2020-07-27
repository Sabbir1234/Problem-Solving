#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n,k,i,j,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a=n-1; k=0;
        if(n==1)
        {
            printf("0\n");
        }
        else
        {
            for(i=a;i>=4;i-=2)
        {
            k+= (i*i*2);
        }
        printf("%lld\n",k+8);
        }

    }
}

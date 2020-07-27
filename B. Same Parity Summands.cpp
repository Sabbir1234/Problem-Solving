#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll ar[1000];
int main()
{
    ll t,n,i,j,a,b,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        a = n - (k-1);
        b = n - 2*(k-1);
        if(a%2 && a>0)
        {
            printf("YES\n");
            for(i=1;i<k;i++)
                printf("1 ");
            printf("%lld\n",a);

            continue;
        }
        else if(b%2==0 && b>0)
        {
            printf("YES\n");
            for(i=1;i<k;i++)
                printf("2 ");
            printf("%lld\n",b);

            continue;
        }
        else
            printf("NO\n");

    }
}

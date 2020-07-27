#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,x,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if((n/2)%2)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for(i=1,x=2;i<=(n/2);i++,x+=2)
            {
                printf("%lld ",x);
            }
            i=(n/2)/2;
            for(j=1,x=1;j<=n/2;j++)
            {

                printf("%lld ",x);
                x+=2;
                if(j==i)
                {
                    x+=2;
                }
            }
            printf("\n");
        }

    }
}

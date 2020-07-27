#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,x,m,i,j,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m; a=0,b=0;

        for(i=1;i<=m;i++)
        {
            cin>>c>>d;

            if(a>0 && b>0)
            {
                if((c>=a && c<=b ) || (d>=a && d<=b) || (c<=a && d>=b))
                {
                    a = min(c,a);
                    b = max(d,b);
                }
            }
            else
            {
                if(c<=x && d>=x)
                {
                     a=c;b=d;
                }
            }

        }
        printf("%lld\n",(b - a)+1);


    }
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        if(a<=b)
        {
            printf("%lld\n",b);
            continue;
        }
        if(c<=d)
        printf("-1\n");
       else
       {
        b+= c * ceil((a-b)*1.00/(c-d)*1.00);
        printf("%lld\n",b);
       }
    }

}

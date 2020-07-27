#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,x,m,i,j,a,b,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>m;
        stack<pair<ll,ll>>p;
        for(i=1;i<=m;i++)
        {
            cin>>c>>d;

            if(!p.empty())
            {
                pair<ll,ll>p1 = p.top();
                if((c>=p1.first && c<=p1.second ) || (d>=p1.first && d<=p1.second) || (c<=p1.first && d>=p1.second) )
                {
                    c = min(c,p1.first);
                    d = max(d,p1.second);
                    p.pop();
                    p.push(make_pair(c,d));
                }
            }
            else
            {
                if(c<=x && d>=x)
                {

                    p.push(make_pair(c,d));
                }
            }

        }
       pair<ll,ll> p1 = p.top();
        printf("%lld\n",(p1.second - p1.first)+1);
        p.pop();

    }
}

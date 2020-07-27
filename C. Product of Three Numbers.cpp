#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n; cnt=0;i=2; vector<ll>v;
        for(i=2;i*i<n;i++)
        {
            if(n%i==0)
            {
                n=n/i;
                v.push_back(i);
                cnt++;
            }
            if(cnt==2)
            {
                v.push_back(n);
                break;
            }

        }
        if(cnt==2)
        {
            printf("YES\n");
            for(i=0;i<v.size();i++)
                printf("%lld ",v[i]);
            cout<<endl;
        }
        else
            printf("NO\n");
    }
}

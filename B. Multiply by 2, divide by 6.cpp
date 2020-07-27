#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,n,i,cnt;
    cin>>t;
    while(t--)
    {
        cin>>n; cnt=0;
        while(n!=1)
        {
            if(n%6==0)
            {
                while(n%6==0)
                {
                    cnt++;
                    n/=6;
                }
            }
            else
            {
                if(n%3==0)
                {
                    n*=2;
                    cnt++;
                }
                else
                    break;
            }
        }
        if(n==1)
            printf("%lld\n",cnt);
        else
            printf("-1\n");
    }
}

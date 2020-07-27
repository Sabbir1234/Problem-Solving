#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,r,g,b,i,d,cnt=0;
    ll ar[4];
    cin>>t;
    while(t--)
    {
        cnt=0;
        for(i=0;i<3;i++)
        cin>>ar[i];
        sort(ar,ar+3);
        if(ar[0]<ar[2]-ar[1])
        {
            ar[1]+=ar[0];
            cnt=min(ar[1],ar[2]);
        }
        else
            cnt=(ar[0]+ar[1]+ar[2])/2;

        printf("%lld\n",cnt);

    }
}

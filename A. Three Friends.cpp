#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll q,i,a,b,c,sum;
    ll ar[4];
    cin>>q;
    while(q--)
    {
        sum=0;
        for(i=0;i<3;i++)cin>>ar[i];sort(ar,ar+3);

        sum=abs(ar[0]-ar[1])+abs(ar[0]-ar[2])+abs(ar[1]-ar[2]);
        if(sum>=4)
            sum-=4;
        else
            sum=0;
        printf("%lld\n",sum);
    }
}

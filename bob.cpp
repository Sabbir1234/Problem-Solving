#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long q,i,j,ar[4];
    cin>>q;
    for(i=1;i<=q;i++)
    {
        for(j=0;j<3;j++)
            cin>>ar[j];
        sort(ar,ar+j);
        ar[2]-=(ar[1]-ar[0]);
        ar[1]+=ar[2]/2;
        printf("%lld\n",ar[1]);

    }
}

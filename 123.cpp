#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,a,cnt=0,p;
    bool flag=true;
    cin>>n>>x;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        cnt++;
        if(x-a==0 || x-a<0)
        {
            p=cnt;
        }
        x=x-a;
    }

        printf("%lld\n",p);
}

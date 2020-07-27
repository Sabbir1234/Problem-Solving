#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    long long n,m,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
       if(n==1)printf("0\n");
       else if(n==2)
        printf("%lld\n",m);
       else
        printf("%lld\n",2*m);
    }

}

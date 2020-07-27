#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d,a,b;
    cin>>n>>d;
    a=n/10;
    if(n%10>=d && d!=0)
        a+=1;
    printf("%lld\n",a);


}

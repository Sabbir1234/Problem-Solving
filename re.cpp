#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    gcd(b,a%b);
}
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=max(a,b);
    d=min(a,b);
    a=gcd(c,d);
    cout<<a<<endl;
}

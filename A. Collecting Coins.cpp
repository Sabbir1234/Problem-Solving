#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,t,m;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>n;
        m=max(a,max(b,c));
        a=m-a+m-b+m-c;
        if(n>=a && (n-a)%3==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

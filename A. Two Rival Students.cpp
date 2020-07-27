#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,x,i,u,v,n,c,d;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>a>>b;
        c=min(a,b);
        d=max(a,b);
        u=n-d;
        v=c-1;
        if(u+v>=x)
            printf("%d\n",(d-c)+x);
        else if(u+v<x)
        {
            printf("%d\n",(d-c)+u+v);
        }
    }
}

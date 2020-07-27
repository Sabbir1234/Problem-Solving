#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,n,m,first,second,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>n>>m; y=0;
        while(n>0 && y<=x)
        {
            y=(x/2) + 10;
            if(y<=x)
            {
                x=y;
                n--;
            }
        }
        y=0;
        if(x>0)
        while(m>0)
        {
            x-=10;
            m--;
        }
        if(x<=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

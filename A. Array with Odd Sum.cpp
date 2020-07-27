#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,a,cnt;
    cin>>t;
    while(t--)
    {
        cnt=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a%2)
            cnt++;
        }
        if(cnt%2)
            printf("YES\n");
        else
            printf("NO\n");

    }
}

#include<bits/stdc++.h>
using namespace std;
int ar[200009];
int main()
{
    int t,n,i,ans,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ar[i];
        sort(ar,ar+n);
        int cnt=0; m=-10000; ans=0;
        for(i=0;i<n;i++)
        {
            m=max(m,ar[i]);
            cnt++;
            if(m==cnt)
            {
                ans++;
                cnt=0;
            }
        }
        printf("%d\n",ans);
    }
}

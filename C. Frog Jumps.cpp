#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,cnt;
    cin>>t;
    while(t--)
    {
        string s,s1;
        s1+='R';
        cin>>s;
        s1+=s; int ans=0; cnt=0;
        for(i=1;i<s1.size();i++)
        {
            if(s1[i]=='R')
            {
                ans=max(ans,cnt+1);
                cnt=0;

            }
            if(s1[i]=='L')
            {
                cnt++;
            }
        }
        ans=max(ans,cnt+1);
        printf("%d\n",ans);
    }
}

#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bo[4]={0};
int main()
{

    ll i,t,a,b,j;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s; ll M=-100,m=200000000; memset(bo,0,sizeof(bo));
        map<char,int>mp;
        for(i=0,j=1;i<s.size();i++,j++)
        {
            mp[s[i]]=i;
            if(s[i]=='1') bo[1]=j;
            else if(s[i]=='2') bo[2]=j;
            else if(s[i]=='3')
                bo[3]=j;
            if(bo[1] && bo[2] && bo[3])
            {
                a=min(bo[1],min(bo[2],bo[3]));
                b=max(bo[1],max(bo[2],bo[3]));
                m=min(m,(b-a+1));
            }
        }
        if(m==200000000)
            printf("0\n");
        else
        printf("%lld\n",m);
    }


}

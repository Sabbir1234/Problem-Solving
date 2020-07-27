#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,i,j;
    string s,s1;
    cin>>t;
    while(t--)
    {
        cin>>s;
        s1=s; ll cnt=0;
        sort(s.begin(),s.end());
        /*if(s1==s)
        {
            cout<<s<<endl;
            continue;
        }*/
        for(i=0,j=s.size()-1;i<s1.size();i++,j--)
        {
              if(s[j]==s1[i])
                {

                    continue;
                }
            else if(cnt<=2)
            {
                s1[i]=s[j];
                cnt++;
            }

        }

        for(j=cnt,i=s1.size()-1;j<=2;j++,i--)
        {
            char c;
            c=s1[s1.size()-1]; s1[s1.size()-1]=s1[i-1];
            s1[i-1]=c;
        }
        cout<<s1<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string s,s1;
        cin>>s;
        int n=s.size();
        for(i=0;i<n-2;i+=2)
        {
            s1+=s[i];
        }
        s1+=s[n-2];
        s1+=s[n-1];
        cout<<s1<<endl;
    }
}

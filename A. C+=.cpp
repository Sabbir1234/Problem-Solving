#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t,k,i;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        cin>>k;
        k--;
        for(i=1;i<=k;i++)
        {
            s+='s';
        }
        cout<<s<<endl;
    }
}

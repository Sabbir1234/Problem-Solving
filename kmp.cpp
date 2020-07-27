#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll failure[1000001],cnt=0;
void fail(string pattern)
{
    ll len=0;
    for(i=1;i<pattern.size();i++)
    {
        if(pattern[i]==pattern[len])
        {
            failure[i]=len+1;
            i++;len++;
        }
        else
        {
            if(len!=0)
            {
                len=failure[i-1];
            }
            else
            {
                failure[i]=0;
                i++;
            }
        }
    }
}
void kmp(string text,string pattern)
{
    ll i=0,j=0;

    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++;j++;
            if(j==pattern.size())
            {
                cnt++;
                j=failure[j-1];
            }

        else
        {
            if(j!=0) j=failure[i-1];
            else
                i++;
        }
    }
}
int main()
{
    ll t,i=1,j;
    string text,pattern;
    cin>>t;
    while(t--)
    {
       cin>>text>>pattern; cnt=0;
       fail(pattern);
       kmp(text,pattern);
       printf("Case %lld: %lld\n",i++,cnt);
    }

}

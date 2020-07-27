#include<bits/stdc++.h>
using namespace std;
int cnt,cn;
//string ss[31];
void permu(string ss[],string s,int l,int r,int k)
{
    int i;
    if(cnt>=k) return;
    if(l==r)
    {
        ss[cn]=s;
        cn++;
        //cout<<s<<endl;
        cnt++;
        return;
    }
    for(i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        permu(ss,s,l+1,r,k);
        swap(s[i],s[l]);
    }
}
int main()
{
    int t,n,k,i,j=1;
    string z="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    scanf("%d",&t);
    while(t--)
    {
        string s; cnt=0,cn=0; string ss[31];
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++)
        {
            s+=z[i];
        }
        permu(ss,s,0,n-1,k);
        sort(ss,ss+cn);
        printf("Case %d:\n",j++);
        for(i=0;i<cn;i++)
        {
            cout<<ss[i]<<endl;
        }
    }
}

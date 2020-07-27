#include<bits/stdc++.h>
using namespace std;
int ar[1000009],mem[1000009];
int lis(int i,int n)
{
    int j,ans;
    ans=0;
    if(mem[i]!=-1)
    {
        return mem[i];
    }
    for(j=i+1;j<n;j++)
    {
        if(ar[j]>ar[i])
        {
            ans=max(ans,lis(j,n));
        }
    }
    mem[i]=ans+1;
    return mem[i];
}
int main()
{
    int n,i,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        mem[i]=-1;
        scanf("%d",&ar[i]);
    }
    ans=0;
    for(i=0;i<n;i++)
    {
        ans=max(ans,lis(i,n));
    }
    printf("%d\n",ans);
}

#include<bits/stdc++.h>
using namespace std;
string s; int cnt[200009];
void cn(int n)
{
    int i,cn=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='1')
        {

            ++cn;
        }
        cnt[i]=cn;
    }
}
int main()
{
    int t,n,k,i,a,b;
    cin>>t;
    while(t--)
    {

        cin>>n>>k; int sum=0,a=-6,b=-6;
        cin>>s; cn(n);
        for(i=0;i<n;)
        {
            a=-6,b=-6;
            if(s[i]=='1')
            {
                i=i+k+1;
                continue;
            }
            else
            {
                if((i+k)<n)
                {
                    a = cnt[i+k]-cnt[i];

                }
                else
                    {
                        a=cnt[n-1]-cnt[i];
                    }
                if((i-k)>0)
                {
                    b = cnt[i] - cnt[i-k-1];
                }
                else
                   {
                       b = cnt[i];
                   }
                if(a==0 && b==0)
                {
                    cnt[i]+=1;
                    s[i]='1';
                    sum++;
                    i+=(k+1);
                    continue;
                }
            }
            i++;
        }
        printf("%d\n",sum);
    }
}

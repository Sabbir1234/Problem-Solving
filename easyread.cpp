#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
map<string,int>mp;
int main()
{
    string s;
    long long sum;
    int t,i,n,m,j,k=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            cin>>s;
            sort(s.begin(),s.end());
            if(mp.find(s)==mp.end())
                mp[s]=1;
            else
                mp[s]++;
        }
        scanf("%d",&m);

        string s1,s2;
        getchar();
        printf("Case %d:\n",k++);
        for(i=1;i<=m;i++)
        {
            sum=1;
            s2="";
            getline (cin, s1);
             for(j=0;j<s1.size();j++)
            {
                if(j==s1.size()-1)
                {
                    s2=s2+s1[j];
                    sort(s2.begin(),s2.end());
                    sum+=mp[s2];
                }
                if(s1[j]==' ')
                {
                sort(s2.begin(),s2.end());
                sum*=mp[s2];
                s2="";
                }
                else
                s2=s2+s1[j];
            }
            if(sum==1)
                printf("0\n");
            else
            printf("%lld\n",sum);
        }

    }
}

#include<bits/stdc++.h>
using namespace std;
int zero[1001],one[1001];
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s; int z=0,o=0,c=0,d=0;
        int n = s.size();
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                zero[z]=i;
                z++;
            }
            else
            {
                one[o]=i;
                o++;
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='0' && (one[0]<i && one[o-1]>i))
            {
                c++;
            }
            else if(s[i]=='1' && (zero[0]<i && zero[z-1]>i))
            {
                d++;
            }
        }
        printf("%d\n",max(c,d));
    }
}

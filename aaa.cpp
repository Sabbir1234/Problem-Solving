#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i;

    cin>>t;
    while(t--)
    {
        cin>>n; int a[201],x=0;
        string s;
        memset(a,0,sizeof(a));
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                if(s[i] ^ x < x)
                {
                    x = x^a[i];
                    if(x==0)break;
                }

            }
            else
            {

               if(s[i] ^ x > x)
                {
                    x = x^a[i];
                    if(x)break;
                }
            }
        }
        if(x)
        printf("1\n");
        else
            printf("0\n");

    }
}


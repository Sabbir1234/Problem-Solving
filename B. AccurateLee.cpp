#include<bits/stdc++.h>
using namespace std;
char str[100009];
int one[100009];
void cl()
{
    for(int i=0;i<=100000;i++)
    {
        one[i]=0;
    }
}
int main()
{
    int t,n,i,j;
    cin>>t;

    while(t--)
    {
        cin>>n; cl();
        string s;
        for(i=0;i<n;i++)
        {
            cin>>str[i];
            if(i==0 && str[i]=='1')
                one[i]+=1;
            else if(str[i]=='1')
            {
               one[i]=one[i-1]+1;;
            }
            else
            {
                one[i]=0;
            }
        }
        j=1; int zero=0;
        for(i=n-1;i>=0;)
        {
            if(s[i]=='1' && zero==0)
            {
                s+=str[i];
                i--;
            }
           else if(str[i]=='0')
            {
                s+=str[i];
                zero++;
                i--;
            }
            else
            {
                if(one[i]>=zero)
                {
                    i--;
                }
                else
                {
                    s.pop_back();
                    zero--;
                }
            }
        }
        for(i=s.size()-1;i>=0;i--)
        {
            printf("%c",s[i]);
        }
        cout<<endl;
    }
}

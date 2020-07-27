#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t,n,i,a,b,z;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>n; a=b=0;
        cin>>s1;
        s2+='1';s3+='1';
        for(i=1;i<n;i++)
        {
            if(a==b)
            {
               if(s1[i]=='2')
               {
                   s2+='1';s3+='1';
                   a++; b++;
               }
               else if(s1[i]=='1')
               {
                   s2+='1'; s3+='0';
                   a++;
               }
               else
               {
                   s2+='0'; s3+='0';

               }
            }
            else
            {
                s2+='0';
                s3+=s1[i];

            }
        }
        s2[i]=s3[i]='\0';
        cout<<s2<<endl;
        cout<<s3<<endl;
    }
}

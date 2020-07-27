#include<bits/stdc++.h>
#include<string>
using namespace std;
map<string,int>mp;
int main()
{
   int m,n,i,am,sum=0,j;
   string s,st;
   char c;
   cin>>m>>n;
   for(i=1;i<=m;i++)
   {
       cin>>s>>am;
       mp[s]=am;
   }
   getline(cin,st);
   for(i=1;i<=n;)
   {
       j=0;
       string str="";
       sum=0;
       for(;j<s.size();j++)
       {
           if(s[j]=='.')
           {
               printf("%d\n",sum);
               i++;
               break;
           }
           else if(s[j]==' ')
           {
               if(mp[str])
               {
                   sum+=mp[str];
                   str="";
               }
           }
           else
           str+=s[j];
       }
   }
}

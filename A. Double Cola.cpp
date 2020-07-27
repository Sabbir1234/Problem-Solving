#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<long long,string> mp ;


int main()
{
   ll n,i;
   mp[1]="Sheldon"; mp[2]="Leonard"; mp[3]="Penny";
mp[4]="Rajesh"; mp[5]="Howard";
   cin>>n;
   if(n<=5)
    cout<<mp[n]<<endl;
   else
   {
       i=n-5;
       i= i%10;
       if(i%2) i++;
       cout<<mp[i/2]<<endl;
   }


}

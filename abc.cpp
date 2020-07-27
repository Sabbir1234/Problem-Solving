#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){

ll t,n,k,m,l=1000000000000000009,i,j;
double x,f;
cin>>t;
   while(t--)
   {
       cin>>n>>k>>m;
       for(i=n,j=1;i<=m;j++)
       {
           i%l;
           (i*=(m%l))%l;

       }
    printf("%lld\n",j);
   }



}

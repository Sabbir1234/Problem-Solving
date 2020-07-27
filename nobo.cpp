#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,x,i,k,a,f;
   cin>>t;
   while(t--)
   {
       cin>>n>>x; int cnt1=0,cnt2=0;
       if(x%2)
       {
           f=x;
           k=0;
       }
       else if(x%2==0)
       {
         f=x-1  ; k=1;
       }
       for(i=0;i<n;i++)
       {
           cin>>a;
           if(a%2) cnt1++;
           else
            cnt2++;
       }
       if((cnt1>=f && cnt2>=k))
        printf("Yes\n");
       else
         printf("No\n");
   }
}

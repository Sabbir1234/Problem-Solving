#include<bits/stdc++.h>
using namespace std;
int ar[501],br[501];
int main()
{
    int t,n,i,j,c,d,sp,temp;
    cin>>t;
    while(t--)
    {
        cin>>n; int cnt=0,zero=0,one=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i>0)
            {
                if(ar[i]<ar[i-1])
                {
                    cnt++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cin>>sp;
            if(sp==0) zero++;
            else
                one++;
        }
       if(cnt && (zero ==0 || one==0))
       {
           printf("No\n");
       }
       else
        printf("Yes\n");
    }
}

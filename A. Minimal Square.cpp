#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t,a,b,res=0,A,B;
        cin>>t;
        while(t--)
        {
            cin>>A>>B; res=0;
            a=max(A,B);
            b=min(A,B);
            if(a==b)
                printf("%d\n",4*(a*a));
            else
            {
               res = ceil(sqrt(a*b + a*b));
               printf("%d\n",res*res);
            }
        }
}

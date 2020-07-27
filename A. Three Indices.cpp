#include<bits/stdc++.h>
using namespace std;
int ar[1001];
int main()
{
    int t,n,i,m,M,mi=0,Mi=0,k,j;
    cin>>t;
    while(t--)
    {
        cin>>n; m=100000;M=-1000;mi=0,Mi=0; int flag=0; int kk =100000;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(i=0;i<n;i++)
        {
            if(flag)
            {
                if(ar[i]<kk)
                {
                    kk = ar[i];
                    k = i+1;
                    continue;
                }
            }
            if(ar[i]<m)
            {
                mi = i+1;
                m=ar[i];
            }
            if(ar[i]>=M && i+1 > mi)
            {
                Mi=i+1;
                M = ar[i];
                flag=1;
            }
        }

        if(mi && Mi && Mi<n)
        {
            printf("YES\n");
            printf("%d %d %d\n",mi,Mi,k);
        }
        else
            printf("NO\n");

    }
}

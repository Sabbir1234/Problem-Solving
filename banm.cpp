#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long g=1000000001;
    int t,i,j,temp,k,n,i1,j1;
    scanf("%d",&t);
    for(i1=1;i1<=t;i1++)
    {
        scanf("%d %d",&n,&k);
        long long h[n];
        for(j1=0;j1<n;j1++)
            scanf("%lld",&h[j1]);
         sort(h , h+n);
    if(n==k)
     printf("%d\n",h[n-1]-h[0]);
     else if(k==1)
        printf("0\n");
    else
    {
        for(i=0;i<n-1;i++)
        {
            if(g>(h[i+1]-h[i]))
                g=(h[i+1]-h[i]);
        }
        printf("%d\n",g);
    }
    }
    return 0;
}


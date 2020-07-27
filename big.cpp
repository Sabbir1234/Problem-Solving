#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,j;
    long long d;
    double sum,mul,k;
    freopen("read.txt","w",stdout);
    while(scanf("%d %d",&n,&r)==2)
    {
        sum=1.0;mul=1.0;
        if(n==0 && r==0)
            break;
          for(i=(n-r+1),j=1;i<=n;i++,j++)
            {
                k=(i*1.00/j*1.00);
                //printf("%f\n",k);
                sum*=k;


            }
            d=(long long)(sum);
            printf("%d things taken %d at a time is %lld exactly.\n",n,r,d+1);

    }
}


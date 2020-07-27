#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,x,a,i,sum;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(n*x+x-sum>m)
            printf("Impossible\n");
        else if(n*x+x-sum<0)
        printf("1\n");
        else
            printf("%d\n",n*x+x-sum);
    }
}

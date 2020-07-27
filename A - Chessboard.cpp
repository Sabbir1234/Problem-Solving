#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("Case %d: %d\n",i++,int(ceil((m*n*1.00)/2.00)));
    }
}

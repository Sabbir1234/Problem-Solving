#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,k=1,x;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0 && n==0)break;
        x=(int)ceil((r-n)*1.00/n*1.00);
        if(x>26) printf("Case %d: impossible\n",k++);
        //else if(n>(r-n))printf("Case %d: 1\n",k++);
        else
        printf("Case %d: %d\n",k++,x);
    }
}

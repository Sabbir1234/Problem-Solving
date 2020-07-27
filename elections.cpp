#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[101][101],d[101],b[101];
int main()
{
    int n,m,maxi=-1000,x=0,y=0,k=0,i,j,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%lld",&a[i][j]);
            {
                if(a[i][j]>maxi)
                {
                    maxi=a[i][j];
                    k=j+1;
                }

            }
        }
        b[x++]=k;
    }
    sort(b,b+x);
    int c=0;
    for(i=0;i<x;i++)
    {
        if(b[i]==b[c])
        {
            cnt++;
        }
        else
        {
           d[b[c]]=cnt;
           c++;
        }
    }
    int ma=-10000;
    for(i=0;i<=n;i++)
    {
        if(d[i]>ma)
        {
            ma=d[i];
        }
    }
    for(i=1;i<=n;i++)
    {
        if(d[i]==ma)
            break;
    }
    printf("%d\n",i);
}

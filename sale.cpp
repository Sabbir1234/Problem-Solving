#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
int a[3001];
bool order(int a,int b)
{
    return a>b;
}
int main()
{
    int n,i,sum=0,cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,a+n,order);
    for(i=n-1;i>0;i--)
    {
        if(a[i]<a[i-1])
            continue;
        sum+=((a[i]-a[i-1])+1);
        a[i-1]=a[i]+1;

    }
    printf("%d\n",sum);
}

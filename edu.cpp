#include<stdio.h>
int a[1002],n,i,cnt=0;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i]>a[i+1] && a[i]>a[i-1]) || (a[i]<a[i+1] && a[i]<a[i-1]))
            cnt++;
    }
    printf("%d\n",cnt);
}

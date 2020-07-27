#include<stdio.h>
int main()
{
    int n,a[30],i;

    freopen("name.txt","r",stdin);
     scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
}

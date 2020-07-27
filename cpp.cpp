#include<stdio.h>
int main()
{
    int n,a[5030],i,j,flag=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i==a[a[a[i]]])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
}

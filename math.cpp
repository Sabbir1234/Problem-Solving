#include<stdio.h>
int main()
{
    int a[7],i,sum=0,d=0,flag=0,j;
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<4;i++)
    {
        d=0;
        for(j=i+1;j<6;j++)
        {
            d=a[i]+a[j]+a[j+1];
            if(d==sum-d)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            break;

    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
}

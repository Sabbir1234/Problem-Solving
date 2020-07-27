#include<stdio.h>
int main()
{
    int n,i,k=0,flag=0,j,l,tag=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]<a[i+1])
        {
            k++;
        }
        else if(a[i]>a[i+1])
        {
            tag=1;
        }
        else
        {
           tag=0;
           break;
        }

    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]<a[i-1])
            j++;
        else
            break;
    }
    int x=a[k];
    for(l=k;l<=i;l++)
    {
        if(x==a[l])
            flag=1;
        else
        {
            flag=0;
            break;
        }
    }
    if(n==1)
        printf("YES\n");
    else if((flag==1 &&  tag==1) || flag==1 || tag==1)
        printf("YES\n");
    else
        printf("NO\n");

}

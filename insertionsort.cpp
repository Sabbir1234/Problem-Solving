#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp,b,key;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        key=a[i];
        for(j=i-1;j>=0;j++)
        {
           if(a[j]>a[i])
           {
               a[j+1]=a[j];
           }
           else
            continue;

        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++)
        printf("%d ",a[i]);

}

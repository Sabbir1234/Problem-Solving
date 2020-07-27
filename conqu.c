#include<stdio.h>
int main()
{
    int a[100],i,j,n,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0,j=i+1;i<n ;i++,j++)
    {
        if(a[j]>a[i])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    for(k=0;k<n;k++)
      printf("%d\n",a[k]);
}

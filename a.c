#include<stdio.h>
void reorder(int n, int a[])
{
    int item,j,temp;
    for(item=0;item<n-1;item++)
    {
        for(j=item+1;j<n;j++)
        {
            if(a[item]>a[j])
            {
                temp=a[item];
                a[item]=a[j];
                a[j]=temp;
            }
        }
    }
    for(j=0;j<n;j++)
    {
        printf("%d\n",a[j]);
    }
}
int main()
{
    int n,a[10],i;
    printf("Enter the element of array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reorder(n,a);
}

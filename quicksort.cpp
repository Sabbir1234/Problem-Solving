#include<stdio.h>
int n;
int par(int a[],int low,int high)
{
    int pivot=a[high],temp,k=0;
    int i=low-1,j;
    for(j=low;j<=high-1;j++)
    {
        if(a[j]<=pivot)
        {
            i++;
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
             for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
        }
    }
    temp=a[high];
    a[high]=a[i+1];
    a[i+1]=temp;
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
    printf("\n");
    return i+1;

}
void quick(int a[],int low,int high)
{
    int i,j;
    int pi;
    if(low<high)
    {
     pi=par(a,low,high);
    quick(a,low,pi-1);
    quick(a,pi+1,high);
    }

}
int main()
{
    int a[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quick(a,0,n-1);
    printf("Sorted array looks like\n");
    for(j=0;j<n;j++)
    {
        printf("%d ",a[j]);
    }
    printf("\n");
}

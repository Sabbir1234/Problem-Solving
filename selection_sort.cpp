#include<stdio.h>
int main()
{
    int ar[30],n,i,j,m=1000000,k,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(ar[j]<m)
            {
               m=ar[j];
               k=j;
            }
        }
        temp=ar[i];
        ar[i]=m;
        ar[k]=temp;
        m=1000000;
    }
    //printf("%d\n",k);
    for(i=0;i<n;i++)
        printf("%d ",ar[i]);
    printf("\n");
}

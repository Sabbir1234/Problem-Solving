#include<stdio.h>
int main()
{
    int i,n,a[100],count=0,j;
    printf("Enter the size\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<=n;i++)
        {
            if(a[j]==a[i])
                count++;
            break;
        }
    }
    printf("%d\n",count);

}

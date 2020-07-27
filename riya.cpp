#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,m,k,i,d,c,j,b;
    scanf("%d %d %d",&n,&m,&k);
    int a[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=m+1,j=0;i<=n;i++,j++)
    {
        if(a[i]!=0 && a[i]<=k)
        {
            break;
        }

    }
    //printf(" j=%d\n",j);
    d=(j+1)*10;
    //printf("%d\n",d);

    for(i=m-1,b=0;i>=1;i--,b++)
    {
        if(a[i]!=0 && a[i]<=k)
        {
            break;
        }
    }
    //printf("b %d\n",b);
   c=(b+1)*10;
   if(m==1)
    printf("%d\n",d);
    else if(m==n)
        printf("%d\n",c);
   else if(d>c )
        printf("%d\n",c);
    else
        printf("%d\n",d);
}

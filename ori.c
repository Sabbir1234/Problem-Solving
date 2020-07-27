#include<stdio.h>
int main()
{
    int n,i,j,k,flag=0,m,f=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            f++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==0)
                continue;
           else if(a[i][j]!=1)
           {
              for(k=0;k<n;k++)
               {
                   for(m=0;m<n;m++)
                   {
                       if((a[i][k]+a[m][j])==a[i][j])
                   {
                       flag=1;
                       break;
                   }
                   else
                    flag=0;
                   }

               }
           }


        }
    }
if(f==1)
        printf("Yes\n");
  else  if(flag==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}


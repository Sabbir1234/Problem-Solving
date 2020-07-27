#include<stdio.h>
int main()
{
    int n,i,j,k,m,flag=0,l,f,cnt=0,c=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]!=1)
           {
               cnt++;
              for(k=0;k<n;k++)
              {
                  if(j==k)
                    continue;
                  for(m=0;m<n;m++)
                  {
                      if(i==m)
                        continue;
                      if((a[i][k]+a[m][j])==a[i][j])
                      {
                          flag=1;
                          break;
                      }

                  }
                 if(flag==1)
                {
                    c++;
                    break;
                }
              }

           }
        }

    }

    if(c==cnt)
        printf("YES\n");
    else
        printf("NO\n");
  return 0;

}


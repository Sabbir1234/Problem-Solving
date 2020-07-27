#include<stdio.h>
int main()
{
    int t,i,a,b,j,m;
    char c[10],d[10];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
           gets(c);
           gets(d);
           while(j==m)
           {
               if(d[3]=='e')
               {
                    printf("yes\n");
               }
               else
               {
                   printf("no\n");
               }

           }
        }
    }





}

#include<stdio.h>
#include<string.h>
char b[1030];
int main()
{
    int n,m,l,i,j,k;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        gets(b);
        l=strlen(b);
      for(j=0;j<l;j++)
       {
           for(k=0;k<n;k++)
           {
               if(b[j]==a[n-1] )
                b[j]=a[0];
               else if(b[j]==a[k])
                  b[j]=a[k+1];
           }
       }
       puts(b);
       printf("\n");
    }

}

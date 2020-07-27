#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,l,k,f;
    char a[15];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",a);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]%2==0)
            {
                a[j]=a[j]+1;
            }

            else
            {
                a[j]=a[j]-1;
            }
       }
       for(k=0;k<l;k++)
       {
           if(a[0]=='0')
           {
              if(a[k]!='0')
           {
               for(f=k;f<l;f++)
                printf("%c",a[f]);
           }
           }
           else
            printf("%c",a[k]);

       }
       printf("\n");
    }
    return 0;
}

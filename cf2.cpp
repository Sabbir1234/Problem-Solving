#include<stdio.h>
int main()
{
   int n,i,cnt=0,sum=0,j,c,d;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
       if(a[i]==1)
        cnt++;
   }
   for(i=0;i<n;i++)
   {
       if(a[i]==0)
        break;

   }
   c=i;
   for(i=n-1,j=0;i>=0;i--,j++)
   {
       if(a[i]==0)
        break;
   }
   d=j;
   for(i=0;i<n;i++)
   {
       if(a[i]==1)
       {
           for(j=i+1;j<n;j++)
           {
               if(a[j]==0)
                sum++;
           }
           break;
       }
   }
   if((n-sum)>=(n-cnt))
   printf("%d\n",(n-sum)+c+d);
   else
    printf("%d\n",(n-cnt)+c+d);

    return 0;
}

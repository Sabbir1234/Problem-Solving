#include<stdio.h>
int main()
{
   int t,a[10000],i=0;
   while((scanf("%d",&a[i]))!=EOF)
   {
       i++;
   }
   i=0;
   while(i<10000)
   {
       if(a[i]==42)
        break;
       else
        printf("%d\n",a[i]);
   }
return 0;

}

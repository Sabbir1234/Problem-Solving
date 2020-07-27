#include<stdio.h>
#include<string.h>
int main()
{
   long long n,k,c,d,a,i;
   scanf("%lld %lld",&n,&k);
   a=n/2;
   if((k+1)>(n/2))
    printf("0 0 %lld\n",n);
   else
   {
       for(i=a;i>=(k+1);i--)
       {
           if(i%(k+1)==0)
           {
               d=i/(k+1);
               break;
           }
       }
       printf("%lld %lld %lld\n",d,d*k,(n-(d+d*k)));
   }
   return 0;
}

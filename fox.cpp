#include<stdio.h>
int main()
{
   long long n;
   scanf("%lld",&n);
   int a=n%10;
   if(a<5)
        printf("%lld\n",n-a);
   else
    printf("%lld\n",(n-a)+10);


}

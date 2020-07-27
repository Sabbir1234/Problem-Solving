#include<stdio.h>
#include<stdlib.h>
long long  a,b,s;
int main()
{

    scanf("%lld %lld %lld",&a,&b,&s);
    a=abs(a);
    b=abs(b);
   if(s>=(a+b) && (s-(a+b))%2==0)
    printf("YES\n");
   else
    printf("NO\n");
}

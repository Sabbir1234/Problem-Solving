#include<stdio.h>
#include<string.h>
long long t,n;
int main()
{
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        printf("%lld\n",n%1000000007);
    }
return 0;

}

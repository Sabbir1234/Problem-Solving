#include<stdio.h>
int main()
{
    long n,a,b,c,k,x,y,i,z;
    scanf("%ld %ld %ld %ld",&n,&a,&b,&c);
    z=n/4;
    printf("%ld\n",z);
    printf("%ld\n",n*z);
    k=(n*z+4)-n;
    printf("%ld\n",k);
}

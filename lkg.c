#include<stdio.h>
long long gr(int a, int b);
long long main()
{
    int a,b,c;
    printf("%lld\n",gr(a,b));
}
long long gr(int a, int b)
{
    scanf("%d %d",&a,&b);
    return a*a*a;
}

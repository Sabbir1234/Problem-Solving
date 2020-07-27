#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
    if(a==b)
        return a;
    else if(b%a==0)
        return a;
    else
        return gcd(b%a,a);
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d\n",gcd(n,m));
}

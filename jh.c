#include<stdio.h>
int foo(int n);
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",foo(n));
}
int foo(int n)
{
   if(n==0)
    return 1;
   else
    return n*foo(n-1);
}

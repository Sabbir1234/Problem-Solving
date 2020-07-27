#include<stdio.h>
int test(int x)
{
    int     y=x;
    x=2*y;
    return (x*y);
}
int main()
{
    int  x=10,y=20,z=30;
    z=test(x);
    printf("%d %d %d\n",x,y,z);
    return 0;
}

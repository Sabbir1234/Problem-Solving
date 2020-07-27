#include<stdio.h>
int main()
{
    int n,sum=0,b,a;
    scanf("%d",&n);

    while(n%3!=0)
    {
        a=n/3;
        n=n/3+n%3;
        sum+=a;

    }
    printf("%d\n",sum);
}

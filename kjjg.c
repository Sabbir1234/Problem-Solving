#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        c=a*b+1;
        printf("Case %d: %d\n",i,c/2);
    }
    return 0;
}

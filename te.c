#include<stdio.h>
int main()
{
    long long x1,y1,x2,y2,x,y,i,flag;
    scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
    scanf("%lld %lld",&x,&y);
    if(abs(x1-x)==0 || abs(y1-y)==0)
        printf("YES\n");
    else if(x2%(abs(x1-x))==0 && y2%(abs(y1-y))==0)
        printf("YES\n");
    else
        printf("NO\n");
}

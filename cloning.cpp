#include<stdio.h>
int main()
{
   long long x,y,a;
   scanf("%lld %lld",&x,&y);
   a=y-1;
   if(y==1 && x!=0)
    printf("No\n");
   else if(x<a)
    printf("No\n");
    else if(x>=a && (x-a)%2==0 && y>0)
        printf("Yes\n");
    else
        printf("No\n");

}

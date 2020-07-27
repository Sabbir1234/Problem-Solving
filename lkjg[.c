#include<stdio.h>
int main()
{
int i,t,a,b;
char c;
while(scanf("%d",&t)==1)
 {
 for(i=1;i<=t;i++)
  {
  b=0;
  while(1)
   {
   scanf("%d",&a);
   if(a>b)
   b=a;
   scanf("%c",&c);
   if(c!=' ')
   break;
   }
  printf("Case %d: %d\n",i,b);
  }
 }
}

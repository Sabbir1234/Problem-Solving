#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
int look[1000];
int fib(int n)
{
    if(look[n]==-1)
    {
        if(n<=1)
          look[n]=n;
        else
            look[n]=fib(n-1) + fib(n-2);
    }
    return look[n];
}
int main()
{
   int i;
   int a;
   for(i=0;i<=988;i++)
   {
       look[i]=-1;
   }
   a=fib(900);
   printf("%d\n",a);


}

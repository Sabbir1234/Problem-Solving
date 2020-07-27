#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int f;
    double b[131072];
    int i=0,j;
   while((scanf("%llu",&f))!=EOF)
   {
       b[i]=sqrt(f);
       i++;
   }
   for(j=i-1;j>=0;j--)
   {
       printf("%.4lf\n",b[j]);
   }
   return 0;
}

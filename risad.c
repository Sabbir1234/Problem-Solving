#include<stdio.h>
int main()
{
int i=0;
unsigned long long int a;
double b[131072];
while(scanf("%llu",&a)!=EOF)
{
b[i]=sqrt(a);
i++;
}
i=i-1;
for(i=i;i>=0;i--){
printf("%.4lf\nn",b[i]);
}
return 0;
}

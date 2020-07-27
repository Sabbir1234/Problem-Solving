#include<stdio.h>
#include<stdlib.h>
int main()
{
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
int n,sum=0,i,avg,a;
scanf("%d",&n);
for( i=0;i<n;i++)
{
scanf("%d",&a);
sum+=a;
//printf("%d ",sum);
}
avg=sum/n;
printf("%d %d\n",sum,avg);
return 0;
}

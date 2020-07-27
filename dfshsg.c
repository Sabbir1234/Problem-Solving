#include<stdio.h>
main()
{
    int n,count=1;
    float a,av,sum=0;
    scanf("%d",&n);
    do
    {
       scanf("%f",&a);
       sum+=a;
       count++;
    }
    while(count<=n);
    av=sum/n;
    printf("%f\n",av);
}

#include<stdio.h>
int main()
{
    float a[10],sum=0;
    int i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    printf("%f\n",sum/n);
}

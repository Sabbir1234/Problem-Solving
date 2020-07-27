#include<stdio.h>
int main()
{
    int i,n,a,sum=0;
    double ava;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        sum=sum+a;
    }
    ava=sum/n;
    printf("%lf",ava);
    return 0;

}

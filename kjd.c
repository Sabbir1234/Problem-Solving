#include<stdio.h>
int main()
{
    int t,i,a,j,sum=0,g;
    char *ar,*b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%d",&a);
        printf("Case %d:\n",i);
        for(j=1;j<=a;j++)
        {
            if(j%2!=0)
            {
              gets(ar);
              scanf("%d",&g);
              sum=sum+g;
            }
            else
            {
                gets(b);
                printf("%d\n",sum);
            }
            }
            }
    return 0;
}

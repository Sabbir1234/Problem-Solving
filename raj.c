#include<stdio.h>
int main()
{
    int i,j,n,k,f;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=0;
        for(j=1;j<i;j++)
        {
             printf(".");
             f++;
        }

        for(k=1;k<=n-(2*f);k++)
            printf("*");
            for(j=1;j<i;j++)
            printf(".");
            printf("\n");

    }
    return 0;
}

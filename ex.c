#include<stdio.h>
int main()
{
    char a[100]={'A','B','C','D','E','F','G','H','I'};
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%c ",a[i]);
    printf("\n");
    for(i=1;i<n;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=n-i;j++)
            printf("%c ",a[j-1]);
        printf("\n");
    }

    return 0;
}

#include<stdio.h>
int a[102];
int main()
{
    int t,i,j;
    char s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<100;)
        {
            scanf("%d",&a[j]);
            if((scanf("%c",&s))=='\n')
                break;
            j++;
        }
    }
    printf("%d\n",j);

    return 0;
}

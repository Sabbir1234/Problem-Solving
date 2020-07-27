#include<stdio.h>
int main()
{
    int t,i,a,b,c;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        if((a>b && a<c) || (a>c && a<b))
        {
            printf("case %d: %d\n",i,a);
        }
        else if((b>c && b<a) || (b>a && b<c))
        {
            printf("case %d: %d\n",i,b);
        }
        else
        {
            printf("case %d: %d\n",i,c);
        }
    }
    return 0;
}

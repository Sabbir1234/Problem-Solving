#include<stdio.h>
int main()
{
    int n,i,c,j;
    char a[8],b[8],y,z;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&c);
        for(j=1;j<=c;j++)
        {
            scanf("%s%s",&a,&b);
            if(j==c)
            {
               if(b[4]=='r')
            {
                printf("Case %d: No\n",i);
            }
            else
            {
                printf("Case %d: Yes\n",i);
            }
            }

        }
    }
}

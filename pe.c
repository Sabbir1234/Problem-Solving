#include<stdio.h>
#include<string.h>
int main()
{
    char a[130],b[130];
    int t,i,j,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %s",a,b);
        l=strlen(a);
        for(j=0;j<l;j++)
        {
            if(a[j]==b[0])
            {
                printf("%d\n",j);
                break;
            }
        }
    }
    return 0;
}

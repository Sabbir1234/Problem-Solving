#include<stdio.h>
#include<string.h>
char a[10005],b[10005];
int main()
{

    int t,i,j,d,g;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %s",a,b);
        if(strlen(a)>strlen(b))
            d=strlen(a);
        else
            d=strlen(b);
        if((strcmp(a,b))==0)
            printf("Case %d: Same\n",i);
        else
            for(j=0; j<d; j++)
            {
                if(a[j]>b[j])
                {
                    printf("Case %d: A\n",i);
                    break;
                }
                else if(a[j]<b[j])
                {
                    printf("Case %d: B\n",i);
                    break;
                }

            }
    }
    return 0;
}


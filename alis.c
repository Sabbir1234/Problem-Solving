#include<stdio.h>
int main()
{
    int t,i,a;
    char d[7];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %s",&a,&d);
        if(a%2==0)
        {
            if(d[0]=='A')
            {
                printf("Case %d: Alice\n",i);
            }
            else
            {
                printf("Case %d: Bob\n",i);
            }
        }
        else
        {
            if(d[0]=='B')
            {
                printf("Case %d: Alice\n",i);
            }
            else
            {
                printf("Case %d: Bob\n",i);
            }
        }

        }
    }


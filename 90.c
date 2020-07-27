#include<stdio.h>
int main()
{
    int t,i,f=2,a,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        printf("Case %d:",i);
        scanf("%d",&a);
        for(j=3;j<=a;j=j+2)
        {
            if(a%j==0)
            {
                while(f<=a)
                {
                if(j*f==a)
                {
                    printf("%d %d\n",j,f);

                }
                else
             {
                 printf("Impossible\n");
                 f=f+2;
             }
                break;
                }



            }
        }
    }
}

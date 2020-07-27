#include<stdio.h>
int main()
{
    int t,i,even;
    long long a;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a);
        if(a%2!=0)
        {
           printf("Case %d: Impossible\n",i);
        }

        else
        {
              even = 1;
                    while(a%2==0) {
                            even*=2;
                            a/=2;

                            }
                            printf("Case %d: %lld %d\n",i+1,a,even);

            }

        }
    }


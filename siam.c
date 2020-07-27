#include<stdio.h>
void prime(int n)
{
    int i,j,k,flag,tag,foo=0;
    for(i=n-2;i>=2;i--)
    {
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
            else
                flag=0;
        }
        if(flag==0)
        {
            if((i+2)==n)
            printf("%d = 2 + %d\n",n,i);
            else
            {
                for(k=3;k<n-1;k++)
                {
                    for(j=2;j*j<=k;j++)
                    {
                        if(k%j==0)
                        {
                            tag=1;
                            break;
                        }
                        else
                            tag=0;
                    }
                    if(tag==0)
                    if((i+k)==n)
                    {
                       printf("%d = %d + %d\n",n,k,i);
                       foo=1;
                       break;
                    }

                }
            }

        }
      if(foo==1)
        break;
    }
}
int main()
{
    int n;
    while((scanf("%d",&n))==1)
    {
        if(n==0)
            break;
        else
        {
            prime(n);
        }
    }
    return 0;
}

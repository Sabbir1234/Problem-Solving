#include<stdio.h>
int main()
{
    int t,i,n,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n>=10)
        {
           b=10;
           a=n-b;
            printf("%d %d\n",a++,b--);
            if(a>10 || b<0)
            {
                a--;
                b++;
            }
        }
        else
        {
            a=0;
            b=n;
          printf("%d %d\n",a++,b--);
          if(a>n || b<0)
          {
              a--;
              b++;
          }
        }



    }
}

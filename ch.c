#include<stdio.h>
int main()
{
    int n,k,i,d;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        int j=0;
        if(n%i==0)
        {
            j++;
            if(j==k)
            {
                d=i;
                break;
            }
        }
    }
    printf("%d\n",d);
}

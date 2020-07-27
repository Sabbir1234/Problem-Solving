#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],count,t,i;
int main()
{
    while((scanf("%d",&t))==1)
    {
        count=0;
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<t-1;i++)
        {
            b[i]=abs(a[i]-a[i+1]);
            if(b[i]<1 || b[i]>t-1)
            {
               count++;
            }
        }

        if(count>0)
             printf("Not jolly\n");
        else
            printf("Jolly\n");
    }
    return 0;
}

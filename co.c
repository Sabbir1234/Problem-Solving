#include<stdio.h>
int main()
{
    int t,i,a,b;
    while((scanf("%d",&t))==1)
    {
        if((t%4==0 && t%100!=0) || (t%400==0))
        {
           printf("This is leap year.\n");
           if(t%15==0)
                printf("This is huluculu festival year.\n");
            if(t%55==0)
            printf("This is bulukulu festival year.\n");
        }
        else if(t%15==0)
            printf("This is huluculu festival year.\n");
        else
            printf("This is an ordinary year.\n");
        printf("\n\n");


    }

    return 0;
}

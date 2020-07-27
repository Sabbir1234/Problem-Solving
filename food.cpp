#include<stdio.h>
int main()
{
    int n,x,a,b,i;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&x);
        a=7;
        b=3;
        if((x<3) || (x<7 && x%3!=0))
            printf("NO\n");
        else
        {
            if(x%7==0 || x%3==0)
                printf("YES\n");
            else if((x-a)%b==0 || (x-b)%a==0)
                printf("YES\n");
            else
            printf("NO\n");
        }
    }
}

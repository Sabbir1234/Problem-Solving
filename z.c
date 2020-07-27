#include<stdio.h>
int main()
{
    int x,y,i,d;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        for(i=y;i>=1;i--)
        {

            if(x%i==0 && y%i==0)
            {
                d=i;

            }


        }


    }
    printf("%d",d);
}

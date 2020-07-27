#include<stdio.h>
int main()
{
    int a,b,c;
    while((scanf("%d",&a))==1)
    {
        if(a==0)
            break;
        else
        {
            if(a%2==0)
            {
                b=a/2;
                printf("%d\n",b-1);
            }
            else
            {
                c=((a-1)/2);
                printf("%d\n",(c-1)+c);
            }
        }
    }
    return 0;
}

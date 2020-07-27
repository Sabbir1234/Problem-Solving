#include<stdio.h>
int main()
{
    int t,i,a,b;
    char s;
    while((scanf("%d",&t))==1)
    {
    for(i=1;i<=t;i++)
    {
        scanf("%d %c %d",&a,&s,&b);
        if(a==b)
        {
            printf("%d\n",a*b);
        }
       else if(s>=65 && s<=90)
        {
            printf("%d\n",b-a);
        }
        else
            printf("%d\n",a+b);



    }
    }
    return 0;

}

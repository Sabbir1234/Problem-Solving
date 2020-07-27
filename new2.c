#include<stdio.h>
int main()
{
    int a[1010],sum=0;
    char s[10];
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s",s);
        if(s[0]=='A' || s[0]=='P' || s[0]=='O' || s[0]=='R')
        a[i]=0;
        else if(s[0]=='B' || s[0]=='M' || s[0]=='S')
        a[i]=1;
        else if(s[0]=='D' || s[0]=='G' || s[0]=='J' || s[0]=='K' || s[0]=='T' || s[0]=='W')
        a[i]=2;

    }
    for(i=0;i<t-1;i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    printf("%d\n",sum);
    return 0;
}

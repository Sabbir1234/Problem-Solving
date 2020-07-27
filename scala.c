#include<stdio.h>
int main()
{
    int s[102],q[102],a,b,sum=0,cnt=0,i,temp,tag;
    float f,g,F,G;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    scanf("%d",&b);
    for(i=0;i<b;i++)
    {
        scanf("%d",&q[i]);
        cnt+=q[i];
    }
    f=sum/a;
    F=a/sum;
    g=cnt/b;
    G=b/cnt;
    if(f>(g || G) || F>(g || G))
    {
        for(i=0;i<a;i++)
        {
            printf("%d ",s[i]);
        }
    }
    else
    {
        for(i=0;i<b;i++)
            printf("%d ",q[i]);
    }

    return 0;
}

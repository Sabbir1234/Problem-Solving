#include<stdio.h>
int main()
{
   char s[100],a[4];
   int l,l2,n,i,j;
   scanf("%d",&n);
   scanf("%s",s);
   scanf("%s",a);
   l=strlen(s);
   l2=strlen(a);
    for(i=(l+12)-1;i>=(n-1)+l2;i--)
    {
        s[i]=s[i-3];
    }
    for(i=(n-1),j=0;i<(n+l2)-1;i++,j++)
    {
        s[i]=;
    }

    printf("%s\n",s);


}

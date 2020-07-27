#include<stdio.h>
#include<string.h>
int main()
{
    char a[76],b[76],*c[6];
    int i,len;
    gets(a);
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        b[i]=a[i]+1;
    }
    c = strrev(b);
    printf("%s\n",c);

}

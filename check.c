#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char a[80],b[80],s[80];
    gets(a);
    gets(b);
    strcat(a,b);
    printf("%s\n",a);
}

#include<stdio.h>
#include<string.h>
int main()
{
    int result;
    char s[10]="123";
    char w[10]="9";
    result=strcmp(s,w);
    printf("%d\n",result);
    return 0;
}

#include<stdio.h>
#include<string.h>
#define max_size 100
int main()
{
    char string[max_size],re[max_size];
    int i,j=0,l;
    gets(string);
    l=strlen(string);
    for(i=l-1;i>=0;i--)
    {
       re[j]=string[i];
       j++;
    }
    re[j]='\0';
    printf("original string %s\n",string);
    printf("Reverse string %s\n",re);
}


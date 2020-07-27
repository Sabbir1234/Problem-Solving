#include<stdio.h>
#include<string.h>
#define max_size 100
int main()
{
    char string[max_size];
    gets(string);
    strrev(string);
    printf("%s\n",string);

}

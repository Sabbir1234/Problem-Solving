#include<stdio.h>
int main()
{
    char a[40];
    int i;
    for(i=0;(a[i]=getchar())!='\n';++i);
    printf("%d\n",i);

}

#include<stdio.h>
int main()
{
    int *p,x,y,*q;
    *p=&x;
    *q=&y;
    scanf("%d %d",&x,&y);
    printf("%x %x\n",&x,&y);

    pintf("%x %x\n",p);
     pintf("%x %x\n",q);
     printf("%d %d\n",*p,*q);
}

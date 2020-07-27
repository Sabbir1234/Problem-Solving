#include<stdio.h>
int main(){
    int x=10;
    int *p;
    printf("%d\n",x);
    p=&x;
    *p=20;
    printf("%d\n",x);
    x=15;
    printf("%d\n",x);
    printf("%p %d\n",p,*p);
    printf("%p\n",&x);
    printf("%p\n",p);
    return 0;
}

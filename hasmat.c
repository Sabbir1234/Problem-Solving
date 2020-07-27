#include<stdio.h>
int main(){
    int k,r,count=0;
    long int i=0,j=1,f;
    scanf("%d",&r);

    for(k=2;k<r;k++){
         f=i+j;
         i=j;
         j=f;
        count++;
    }
    printf("%d\n",count);

    return 0;
}

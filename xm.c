#include <stdio.h>
int main()
{
    int $If=3;
    double x=123.4562147656254645;
    //printf("%d",$If);
    int i,j,n=10;
    int num[]={1,2,3,4,1,2,3,4,8,9};
    for(i=0,j=n-1;i<n;i++,j--){
        if(num[j]%2==0 && i%2==0){
            printf("%d",num[i]);
        }
    }
}

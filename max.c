#include<stdio.h>
int test(int a[],int n)
{

    int n=7,i;
    int max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}

int main()
{
    int a[]={2,6,7,4,9,8,6,7,5,4,4};
    int n=7;
    int c=test(a[],n)
    printf("%d\n",c)l
}

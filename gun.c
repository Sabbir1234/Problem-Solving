#include<stdio.h>
int linecount(void)
{
    char line[80];
    int count=0;
    while((line[count]=getchar())!='\n')
        ++count;
    return (count);
}
int main()
{
    int n,count=0,sum=0;
    float avg;
    while((n=linecount())>0)
    {
        sum+=n;
        ++count;
    }
    avg= (float)sum/count;
    printf("\nAverage number of per line is %f\n",avg);
}


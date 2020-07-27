#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in ,*out;
    in=fopen("a.txt","r");
    out= fopen("b.txt","w");

    int n,i,sum=0,a;
    fscanf(in,"%d",&n);
    for(i=0;i<n;i++)
    {
        fscanf(in,"%d",&a);
        sum+=a;
    }
    fprintf(out,"%d\n",sum);

}

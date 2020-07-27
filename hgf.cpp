#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;
long int b[250003],x[250002];
long int t,i,j=1,temp;
int main()
{
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&b[i]);
        if(b[i]!=0)
        {
            x[j]=b[i];
            j++;
        }

    }
    sort(x+1, x + j);
    if((j-1)%2==0)
    {
        printf("%.1lf\n",(double)(x[(j-1)/2]+x[((j-1)/2)+1])/2);
    }
    else
    {
        printf("%.1lf\n",(double)(x[(j)/2]));
    }

    return 0;

}

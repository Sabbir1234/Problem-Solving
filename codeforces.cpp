#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
#include<vector>
using namespace std;
int a[1002],n,i,j,cnt=0,temp,sum=0,flag=0,b;
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    b=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]==a[0])
            sum++;
    }
    sort(a,a+n);
    if(sum!=n)
    {
        for(i=1;i<n;)
    {
        if(a[i]>a[i-1])
         {
            i++;
         }
        else
        {
            for(j=i+1;j<n;j++)
            {
                if(a[j]>a[j-1])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    i+=2;
                    break;
                }
            }
        }
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
            cnt++;
    }
    }
    else
    {
        flag=1;
    }
    if(flag!=1)
    printf("%d\n",cnt);
    else
        printf("0\n");

}
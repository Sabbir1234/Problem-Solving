#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,k,temp,cnt=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=1;i<n;i++)
    {

         if(a[i]>a[i-1])
        {
            cnt++;
            continue;
        }
        else
        {
            for(k=i;k<n;k++)
            {
                if(a[k]>a[i-1])
                {
                    temp=a[i];
                    a[i]=a[k];
                    a[k]=temp;
                    cnt++;
                    break;
                }

            }

        }
    }
    printf("%d\n",cnt);
    return 0;
}

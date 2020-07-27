#include<stdio.h>
#include<algorithm>
using namespace std;
long long n,x[100002],cnt=0,m,i,j,q,position;
long long BinarySearching(long long arr[], long long Max, long long element)
{
      int low = 0, high = Max - 1, middle;
      while(low <= high)
      {
            middle = (low + high) / 2;
            if(element > arr[middle])
                  low = middle + 1;
            else if(element < arr[middle])
                  high = middle - 1;
            else
                  return middle;
      }
      return middle+1;
}
int main()
{
    scanf("%lld",&n);
    for(i=0;i<n;i++)
        scanf("%lld",&x[i]);
    sort(x,x+n);
    scanf("%lld",&q);
    for(i=1;i<=q;i++)
    {
        cnt=0;
        scanf("%lld",&m);
        position=BinarySearching(x,n,m);
        for(j=position+1;x[j]==m;j++);
        if(position==mi)
            printf("0\n");
       else
        printf("%lld\n",j);
    }
    return 0;
}

#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int a,n,k,i,j,sum=0;
int main()
{
    vector<int>v1;
    vector<int>v2;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
       {
           scanf("%d",&a);
           v1.push_back(a);
       }
       v2=v1;
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
    {
         sum+=v2[i];
        if(sum>k)
        {
            sum=sum-v2[i];
            break;
        }

    }
    printf("%d\n",i);
   for(j=0;j<i;j++)
   {
       for(k=0;k<n;k++)
       {
           if(v1[k]==0)
            continue;
           if(v2[j]==v1[k])
           {
               printf("%d ",k+1);
               v1[k]=0;
           break;
           }
       }
   }
    printf("\n");
return 0;

return 0;
}

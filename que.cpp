#include<stdio.h>
#include<iostream>
#include<map>
#include<iterator>
#include<algorithm>
#include<functional>
using namespace std;
long long ng[101],po[101];
bool myfun(int a,int b)
{
    return (a>b);
}
int main()
{
    int i,j,k,n,f,temp;
    long long a,b,sum=0,cnt=0,sm=0;
    map<int ,int>m;
     map<int ,int>::iterator it;
     scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld %lld",&a,&b);
        m.insert(make_pair(a,b));
    }
    i=0,j=0;
    for(it=m.begin();it!=m.end();it++)
    {
       if(it->first<0)
       {
           ng[i]=it->second;
           i++;
           sum+=it->second;
       }
       else
       {
           po[j]=it->second;
           j++;
           cnt+=it->second;
       }

    }
    sort(ng,ng+i,myfun);

 // for(k=0;k<i;k++)
    //printf("%d\n",ng[k]);
    if(i==0)
        printf("%lld\n",po[0]);
     else if(j==0)
     printf("%lld\n",ng[0]);
    else if(j>i)
    {
        for(k=0;k<=i;k++)
        {
            sm+=po[k];
        }
        printf("%lld\n",sm+sum);
    }
    else if(j==i)
    printf("%lld\n",sum+cnt);
    else
    {
       for(k=0;k<=j;k++)
        {
            sm+=ng[k];
        }
        printf("%lld\n",sm+cnt);
    }
  return 0;

}

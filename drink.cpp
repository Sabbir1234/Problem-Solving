#include<bits/stdc++.h>
using namespace std;
int ar[10000];
int indx[1000];
int main()
{
    int n,k,i,j,m=0,sum=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
       cin>>ar[i];
       indx[ar[i]]+=1;
    }
    int y=(int)(ceil(n/2));
    sort(indx,indx+k);
    for(i=0;i<k;i++)
    {
        if(indx[i]%2==0 && m<=y)
        {
            sum+=indx[i];
            m+=(indx[i]/2);
        }
        else if(indx[i]%2!=0 && m<=y)
        {
            if(indx[i]>1)
            sum+=indx[i]-1;
            else
                sum+=1;
            m+=(indx[i]/2);
        }

    }
    printf("%d\n",sum+m);
}

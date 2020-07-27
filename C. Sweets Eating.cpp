#include<bits/stdc++.h>
using namespace std;
int ar[200009];
int main()
{
    int n,m,i,j,k=0,sum=0,a,cnt=1;
    cin>>n>>m;
    for(i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    a=1;
    for(i=0;i<n;i++)
    {
        a=1;sum=0;cnt=1;
        for(j=i;j>=0;j--,cnt++)
        {
            sum+=ar[j]*a;
            if(cnt==m)
             {
                 a++;
                 cnt=0;
             }


        }
        printf("%d ",sum);
    }
    cout<<endl;
}

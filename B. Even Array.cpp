#include<bits/stdc++.h>
using namespace std;
int ar[1009];
int main()
{
    int t,n,i,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n; a=0,b=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i%2==0 && ar[i]%2==1)
            {
                a++;
            }
            if(i%2==1 && ar[i]%2==0)
            {
                b++;
            }
        }
        if(a==b)
            printf("%d\n",a);
        else
            printf("-1\n");

    }
}

#include<bits/stdc++.h>
using namespace std;
int a[100009];
int main()
{
    int n,x,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x; int sum=0,flag=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }

        for(i=0,j=n-1;i<n,j>=0;)
        {
            if(sum%x)
            {

                flag=1;
                break;
            }
            else
            {
                if((sum-a[i])%x )
                {
                    sum-=a[i];
                    i++;
                    continue;
                }
                else if( (sum-a[j])%x )
                {
                    sum-=a[j];
                    j--;
                    continue;
                }
                else
                {
                    sum-=(a[i] + a[j]);

                    //if(a[i]==0)i--;
                    //if(a[j]==0)j++;
                    i++;j--;
                }
            }
        }
        if(flag)
        {
            printf("%d\n",(j-i)+1);
        }
        else
            printf("-1\n");
    }
}

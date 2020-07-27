#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n; char a[51][51]; int cnt=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='0') cnt++;

            }
        }
      int flag=0;
        if(cnt==n*n)
           {
               //printf("Got\n");
               printf("YES\n");
           }
        else
        {
            for(i=0;i<n;i++)
           {
              for(j=0;j<n;j++)
             {

                if(a[i][j]=='1')
                {
                    if( (j+1<n && a[i][j+1]=='0') && ( i+1<n && a[i+1][j]=='0' ) )
                    {
                        flag=1;
                        break;
                    }
                }

              }
            if(flag==1)break;
          }
          if(flag==1)printf("NO\n");
          else
            printf("YES\n");

        }

    }
}

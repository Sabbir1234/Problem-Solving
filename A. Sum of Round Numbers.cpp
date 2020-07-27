#include<bits/stdc++.h>
using namespace std;
int ar[5]={1,10,100,1000,10000};
int br[10];
int cnt_no(int n)
{
    int i=0;
    while(n)
        {
            n/=10;
            i++;
        }
        return i;
}
int main()
{
    int t,n,i,j,a;
    cin>>t;
    while(t--)
    {
        cin>>n; i=0,j=n;
        i = cnt_no(n);
        int k=0,cnt=0;
        while(j)
        {
            if(j%ar[i-1]==0)
            {
                cnt++;
                br[k++]=j;
                break;
            }
            else
            {
                a= j / ar[i-1];
                br[k] = a * ar[i-1];

                j = j - br[k];
                i = cnt_no(j);
                k++;
                cnt++;
            }
        }
        printf("%d\n",cnt);
        for(i=0;i<cnt;i++)
            printf("%d ",br[i]);
        printf("\n");

    }
}

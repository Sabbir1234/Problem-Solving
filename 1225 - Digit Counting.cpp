#include<bits/stdc++.h>
using namespace std;
int ar[1001][1001];
int br[1001]={0};
void init()
{
    int i,j;
    for(i=1;i<=1000;i++)
    {
        j=i;
        while(j!=0)
        {
            printf("i=%d j%10 =%d\n",i,j%10);
            br[j%10]++;
            ar[i][j%10]+=(br[j%10]);
            printf("for i=%d and for digit=%d %d\n",i,j%10,ar[i][j%10]);
            j=j/10;
        }
    }
}
int main()
{
    int i,j,n,t;
    memset(ar,0,sizeof(ar));
    memset(br,0,sizeof(br));
    init();
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<=9;i++)
            printf("%d ",ar[n][i]);
        printf("\n");
    }
}

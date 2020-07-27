#include<bits/stdc++.h>
using namespace std;
bool row[51],col[51];
void cl()
{
    for(int i=0;i<=50;i++)
    {
        row[i]=col[i]=0;
    }
}
int main()
{
    int t,n,m,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m; int ar[51][51]={0};  int flag=0;
        cl();
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>ar[i][j];
                if(ar[i][j])
                {
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(row[i]==0 && col[j]==0)
                {
                    flag++;
                    row[i]=1; col[j]=1;
                }
            }
        }
        //printf("flag %d\n",flag);
        if(flag%2)
            printf("Ashish\n");
        else
            printf("Vivek\n");
    }
}

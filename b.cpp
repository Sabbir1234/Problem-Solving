#include<bits/stdc++.h>
using namespace std;
int sum=0; int a[100][100];
int rec(int row,int col,int i,int j)
{
    //sum=a[i][j];
    if(i==row-1 && j==col-1)
    {
        return a[i][j];
    }
    sum=a[i][j];
    if(j==col){i++;j=0;}
    sum=rec(row,col,i,j+1) + a[i][j];
}
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    sum=rec(n,m,0,0);
    printf("%d\n",sum);
}

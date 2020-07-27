#include<bits/stdc++.h>
using namespace std;
int dr[4]={0,0,1,-1};
int dc[4]={1,-1,0,0};
char grid[200][200];
int flag[200][200];
int m,n,cnt;
void flood(char c,int i,int j)
{
    int nx,ny,k;
    //if(i<0 || j<0 || i>=m || j>=n)
      //  return;
    if(grid[i][j]==c && flag[i][j]==0)
    {
        flag[i][j]=1;
        //printf("i-%d j-%d\n",i,j);
        for(k=0;k<4;k++)
        {
            nx=j+dc[k];
            ny=i+dr[k];
            if((nx>=0 || nx<n)&&(ny>=0 || ny<m) && grid[ny][nx]==c)
            {
                flood(c,ny,nx);
            }
        }
        if(j==n-1 && grid[i][0])
            flood(c,i,0);
        if(j==0 && grid[i][n-1])
            flood(c,i,n-1);
    }

}
void floodfill(char c,int i,int j)
{

    int nx,ny,k;
    // if(i<0 || j<0 || i>=m || j>=n)
        //return;
    if(grid[i][j]==c && flag[i][j]==0)
    {
        cnt++;
        //printf("i-%d  j-%d cnt-%d\n",i,j,cnt);
        flag[i][j]=1;
        for(k=0;k<4;k++)
        {
            nx=j+dc[k];
            ny=i+dr[k];
            if((nx>=0 || nx<n)&&(ny>=0 || ny<m) && grid[ny][nx]==c)
            {
                floodfill(c,ny,nx);
            }
        }
        if(j==n-1 && grid[i][0]==c)
            floodfill(c,i,0);
        if(j==0 && grid[i][n-1]==c)
            floodfill(c,i,n-1);
    }

}
int main()
{
    int i,j,z,x,y;
    freopen("flood.txt","w",stdout);
    while(scanf("%d %d\n\n",&m,&n)==2)
    {
        memset(flag,0,sizeof(flag));
        cnt=0,z=0;
         for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {
                 cin>>grid[i][j];
             }
         }
         cin>>x>>y;
         char ch=grid[x][y];
         flood(ch,x,y);
         for(i=0;i<m;i++)
         {
             for(j=0;j<n;j++)
             {

                 if(grid[i][j]==ch && flag[i][j]==0)
                 {
                     cnt=0;
                     floodfill(ch,i,j);
                     z=max(z,cnt);
                  }
             }
         }
         printf("%d\n",z);
         z=0;

    }
}

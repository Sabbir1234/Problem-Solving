#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
map<pair<int,int>,int>mp;
char mat[101][101];
int row,col,flag,vis[101][101];
int dr[8]={1,0,-1,0,-1,1,-1,1};
int dc[8]={0,1,0,-1,1,1,-1,-1};
void flood(int r,int c)
{
    int res,i;
    if(mat[r][c]=='*') return;
    else if(mat[r][c]=='@')
    {
        //printf("r=%d c=%d\n",r,c);
        vis[r][c]=1;
        //return;
    }
   for(i=0;i<8;i++)
   {
       if(r+dr[i]<row && c+dc[i]<col && r+dr[i]>=0 && c+dc[i]>=0)
       {
           flood(r+dr[i],c+dc[i]);
           mat[r][c]='*';

       }

   }

}
void cl()
{
    int i,j;
    for(i=0;i<=100;i++)
    {
        for(j=0;j<=100;j++)
        {
            vis[i][j]=0;
        }
    }
}
int main()
{
    int i,j,r,c;
    while(1)
    {
        cl();
        scanf("%d",&row);
        if(row==0) break;
        scanf("%d",&col);
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='@')
                {
                    v.push_back(make_pair(i,j));
                }
            }
        }
        int res=0;
        for(i=0;i<v.size();i++)
        {
            r=v[i].first;
            c=v[i].second;
            //printf("v-> r = %d c = %d\n",r,c);
            if(vis[r][c]==0)
              {
                  flood(r,c);
                  res++;;
              }
        }
        cout<<res<<endl;
        v.clear();
    }

}

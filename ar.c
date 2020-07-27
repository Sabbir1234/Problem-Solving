#include<stdio.h>
int main()
{
   int t,row,col,i=0,j,a[100][100],x=0,y=0;
   scanf("%d",&t);
   for(i=0;i<t;i++)
    for(j=0;j<t;j++)
   {
       scanf("%d",&a[i][j]);
   }
   for(i=0;i<t;i++)
   {
       for(row=i,col=0;row>=0;row--,col++)
        printf("%d ",a[row][col]);
   }
   for(i=t-1;i<=20;i++)
   {
       for(row=i,col=1;row>=1;row--,col++)
        printf("%d ",a[row][col]);
   }

}

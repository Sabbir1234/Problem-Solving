#include<stdio.h>
int main()
{
   long long n,i,j,k,m,sum,t,q,f,g,d,h,row,col;
   char x;
   scanf("%lld",&n);
   long long  a[n][n],b[n][n];
   for(row=0;row<n;i++)
        for(col=0;col<n;col++)
        scanf("%lld",&a[row][col]);
    for(row=0;row<n;row++)
    for(col=0;col<n;col++)
   scanf("%lld",&b[row][col]);
   scanf("%lld",&t);
   for(d=1;d<=t;d++)
   {
       sum=0;
       scanf("%c %lld %lld %lld",&x,&i,&j,&q);
      if(x=='A')
       {
           f=a[i][j];
           a[i][j]=q;
            for(h=0;h<n;h++)
            {
           for(row=0;row<n;row++)
           for(col=0;col<n;col++)
           {
               sum+= (a[row][col]*b[col][h]);
           }
            }
         printf("%lld\n",sum);
         a[i][j]=f;

       }
       else if(x=='B')
       {
           g=b[i][j];
           b[i][j]=q;
           for(h=0;h<n;h++)
           for(row=0;row<n;row++)
           for(col=0;col<n;col++)
           {
               sum+= (a[row][col]*b[col][h]);
           }
         printf("%lld\n",sum);
         b[i][j]=g;

       }
   }

}


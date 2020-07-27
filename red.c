#include<stdio.h>
int main()
{
   long long n,i,j,k,m,sum=0,t,q,f,g,d;
   char x;
   scanf("%lld",&n);
   long long  a[n][n],b[n][n],c[n][n];
   for(i=0;i<n;i++)
        for(j=0;j<n;j++)
   {
       scanf("%lld",&a[i][j]);
   }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
   {
       scanf("%lld",&b[i][j]);
   }
   scanf("%lld",&t);
   for(d=1;d<=t;d++)
   {
       sum=0;
       scanf("%c %lld %lld %lld",&x,&i,&j,&q);
       f=a[i][j];
       g=b[i][j];
       if(x=='A')
       {
           a[i][j]=q;
       }
       else if(x=='B')
        b[i][j]=q;
        for(k=0;k<n;k++)
         for(m=0;m<n;m++)
         {
             sum+=a[k][m]*b[m][k];
         }
         printf("%d\n",sum);

         a[i][j]=f;
      b[i][j]=g;
   }

}

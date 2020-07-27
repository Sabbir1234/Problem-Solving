#include<stdio.h>
int s,q,i,sum=0,cnt=0;
float z,y,m,n;
int main()
{
  scanf("%d",&s);
  int a[s];
  for(i=0;i<s;i++)
  {
      scanf("%d",&a[i]);
      sum+=a[i];
  }
  z=sum/s;
  y=s/sum;
  scanf("%d",&q);
  int b[q];
  for(i=0;i<q;i++)
  {
      scanf("%d",&b[i]);
      cnt+=b[i];
  }
  m=cnt/q;
  n=q/cnt;
  if(m==0)
  {
      if((z || y)>n)
          for(i=0;i<s;i++)
            printf("%d ",a[i]);
      else
          for(i=0;i<q;i++)
            printf("%d ",b[i]);
  }
  else
  {
      if((z || y)>m)
          for(i=0;i<s;i++)
            printf("%d ",a[i]);
      else
          for(i=0;i<q;i++)
            printf("%d ",b[i]);
  }
return 0;
}

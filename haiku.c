#include<stdio.h>
#include<string.h>
int main()
{
    int n,cnt=0,i,j,m=0;
    scanf("%d",&n);
    int a[n],k=0,b[n];
  char s[n][22],w[n][22];
  for(i=0;i<n;i++)
  {
      scanf("%s %s",&s[i],&w[i]);
  }
  for(j=0;j<n-1;j++)
  {
      for(i=j+1;i<n;i++)
      if(strcmp(w[j],s[i])==0)
      {
          cnt++;
          a[k]=j;
          b[m]=i;
          m++;
          k++;
      }

  }
  printf("%d\n",cnt+1);
  for(i=0;i<cnt;i++)
  {
      printf("%s %s\n",s[a[i]],w[b[i]]);
  }
  printf("%s %s\n",s[n-1],w[n-1]);
  return 0;
}

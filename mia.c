#include <stdio.h>

int main()
{
  char a[20],b[20];
  int i,n,cnt=0;
  scanf("%d",&n);
  char s[n][20];
  for(i=0;i<n;i++)
  {
      scanf("%s",s[i]);
  }
  strcpy(a,s[0]);
  for(i=1;i<n;i++)
  {
      if(strcmp(a,s[i])==0)
        cnt++;
      else
        strcpy(b,s[i]);
  }
  if((cnt+1)>(n/2))
    printf("%s\n",a);
  else
    printf("%s\n",b);

   return 0;
}

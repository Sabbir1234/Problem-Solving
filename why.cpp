#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
char s[1000];
int main()
{
   int l,i,k,j,a,h,flag=0;
  scanf("%s",s);
  l=strlen(s);
  for(i=0;i<l;i++)
  {

      if(s[i]=='h')
      {
          for(j=i+1;j<l;j++)
          {
              if(s[j]=='e')
              {
                  for(k=j+1;k<l;k++)
                  {
                      if(s[k]=='i')
                  {
                      for(a=k+1;a<l;a++)
                      {
                         if(s[a]=='d')
                            for(h=a+1;h<l;h++)
                         {
                             if(s[h]=='i')
                                flag=1;
                         }
                      }
                   }
                }

              }
         }
      }

  }
  if(flag==1 && l!=5)
    printf("YES\n");
  else
    printf("NO\n");

    return 0;
}


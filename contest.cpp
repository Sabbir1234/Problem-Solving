#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[102];
int main()
{
    int l,i=0,cnt=0;
    char c='A';
   scanf("%s",s);
   l=strlen(s);
   if(l<26)
    printf("NO\n");
   else
   {
       for( ;i<l;i++)
       {
           if(toupper(s[i])==c)
           {
               cnt++;
               c=c+1;
           }

       }
   }
   return 0;
}

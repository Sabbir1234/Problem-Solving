#include<stdio.h>
#include<string.h>
#define max_size 50
int main()
{
   int i;
   char str[50];
   i=0;
   do
   {
       scanf("%c",&str[i]);
       i=i+1;
   }
   while(str[i-1] != '\n');
   str[i]='\0';
   printf("%s\n",str);
}

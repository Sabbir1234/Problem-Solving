#include <stdio.h>
#include<string.h>
char s[1002];
int main()
{
    int k,l,i,j,cnt=0;
   scanf("%s",s);
   scanf("%d",&k);
   l=strlen(s);
   char a[l];
   strcpy(a,s);
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
           if(s[i]==a[j])
            {
                cnt++;
                a[j]='0';
            }

       }
   }
   if(l<k)
    printf("impossible\n");
    else if((l-cnt)>k)
        printf("0\n");
    else
        printf("%d\n",k-(l-cnt));


}

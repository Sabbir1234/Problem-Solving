#include<stdio.h>
#include<string.h>
char s[103],t[103],z[103];
int main()
{
    int i,l,flag=0;
    scanf("%s",s);
    scanf("%s",t);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if((t[i]-s[i])>=2)
        {
           z[i]=s[i]+1;
           flag=1;
        }
        else if(s[i]==t[i])
           z[i]=s[i];
        else
        {
            flag=2;
            z[i]=s[i];
        }
    }
     if(flag==1)
        printf("%s\n",z);
    else if(flag==2)
        printf("No such string\n");
    return 0;
}

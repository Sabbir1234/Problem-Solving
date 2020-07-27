#include<stdio.h>
#include<string.h>
int main()
{
    char s[102],k[102];
    int i,j=0,n;
    scanf("%d",&n);
    scanf("%s",s);
    k[j++]=s[0];
    for(i=0;i<strlen(s);i++)
    {
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y') && ((s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y')))
        {
            continue;
        }
        k[j++]=s[i+1];
    }
    k[j]='\0';
    printf("%s\n",k);
}

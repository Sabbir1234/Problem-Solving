#include<stdio.h>
#include<string.h>
char s[102];
int main()
{
    int i,j,l,flag=0,cnt=0;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='N' &&s[i+1]=='i'&& s[i+2]=='k'&&s[i+3]=='i'&&s[i+4]=='t'&&s[i+5]=='a')
        {
            flag=1;
              cnt++;
        }
        else if(s[i]=='A'&&s[i+1]=='n'&&s[i+2]=='n')
        {
            flag=1;
            cnt++;
        }
        else if(s[i]=='D'&& s[i+1]=='a' && s[i+2]=='n'&&s[i+3]=='i'&&s[i+4]=='l')
        {
            flag=1;
            cnt++;
        }
        else if(s[i]=='S'&& s[i+1]=='l' && s[i+2]=='a'&&s[i+3]=='v'&&s[i+4]=='a')
        {
            flag=1;
    cnt++;
        }
        else if(s[i]=='O'&& s[i+1]=='l' && s[i+2]=='y'&&s[i+3]=='a')
        {
            flag=1;
            cnt++;
        }
    }
    if(flag==1 && cnt==1)
        printf("YES\n");
    else
        printf("NO\n");
}

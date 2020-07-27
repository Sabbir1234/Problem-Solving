#include<stdio.h>
char s[100000];
int main()
{
    int i,flag=0,cnt=0,l,j;
    scanf("%s",s);
    l=strlen(s);
    for(i=0,j=l-1;i<l/2;i++,j--)
    {
        if( ((s[i]=='A' && s[i+1]=='B') && (s[j]=='A') && (s[j-1]=='B')) || ((s[i]=='B' && s[i+1]=='A') &&(s[j]=='B' && s[j-1]=='A')) )
        {
            if((s[i]=='A' && s[i+1]=='B' && s[i+2]=='A') || (s[i]=='B' && s[i+1]=='A' && s[i+2]=='B'))
            {
               flag=0;
               break;
            }

            else
                flag=1;
        }
    }
    if(flag==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101];
    int i,j,cnt=0,flag=0,l;
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
        {
            for(j=i+1;j<l;j++)
            {
                if(s[j]=='0')
                {
                    cnt++;
                }
            }
            if(cnt>=6)
            {
                flag=1;
                break;
            }
            else
                break;
        }
    }
    if(flag==1)
        printf("yes\n");
    else
        printf("no\n");
}

#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[2100];
int main()
{    int flag,i;
    while(1)
    {
        gets(s);
        if(s[0]=='*')
            break;
        else
        {
            flag=1;
            for(i=1;i<strlen(s);i++)
            {
                if(s[i]==' ')
                {
                    if(toupper(s[0])==toupper(s[i+1]))
                        continue;
                    else
                    {
                        flag=0;
                        break;
                    }
                }

            }
            if(flag==0)
                printf("N\n");
            else
                printf("Y\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int cnt=n;
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {

            continue;
        }
        else
        {
            if((s[i]=='0' && s[i-1]=='1') || (s[i]=='1' && s[i-1]=='0'))
            {
                cnt-=2;
                s[i]=s[i-2];
            }
        }
    }
    printf("%d\n",abs(cnt));
}

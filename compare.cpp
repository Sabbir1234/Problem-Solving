#include<stdio.h>
#include<string.h>
char s1[100000],s2[100000];
int found=0,l1,l2,i,j,cnt=0;
int fao(char c)
{
    int ct=0,k;
    for(k=0;k<l1;k++)
    {
        if(s1[k]==c)
            ct++;

    }
    return ct;
}
int main()
{
    int d=0,flag=2,z;

    scanf("%s",s1);
    scanf("%s",s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l2;i++)
    {
        cnt=0;
        for(j=i+1;j<l2;j++)
        {
            if(s2[i]==s2[j])
            {
                cnt++;
            }
        }

        z=fao(s2[i]);
        if(z==cnt+1)
        {
            flag=1;
            d++;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(strcmp(s1,s2)==0 || (l1==1 && l2==1))
        printf("NO\n");
    else if(l1!=l2)
        printf("NO\n");
   else  if(flag==1)
        printf("YES\n");
    else if(flag==0)
        printf("NO\n");
        return 0;
}

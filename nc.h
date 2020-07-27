#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80],c[80];
    int k,i,j,len,odd,even,t;
    scanf("%d",&t);
    for(k=1;k<=t;k++)
    {
        gets(a);
        len=strlen(a);
        odd=(len-1)/2;
        even=len/2;
        for(i=0;i<len;i++)
        {
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z'))
            {
                b[i]=a[i]+3;
            }
            c=strrev(b);
        }

            if(len%2!=0)
            {
                for(j=0;j<len;j++)
                    if(j>odd-1)
                    {
                         c[j]-=1;
                    }

                printf("%s\n",c);
            }
            else
            {
                for(j=0;j<len;j++)
                    if(j>even-1)
                    {
                       c[i]-=1;
                    }

                    printf("%s\n",c);
            }
        }
    }
}

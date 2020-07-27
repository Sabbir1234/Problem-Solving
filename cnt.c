#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80],c[80];
    int k,i,j,len,odd,even,t,f;
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
                a[i]+=3;
            }
           for(f=len-1,i=0;f>=0,i<len;f--,i++)
            c[i]=a[f];
        }

            if(len%2!=0)
            {
                for(j=0;j<len;j++)
                {
                    if(j>odd-1)
                    {
                         c[j]-=1;
                    }
                }


                puts(c);
            }
            else
            {
                for(j=0;j<len;j++)
                {
                    if(j>even-1)
                    {
                       c[i]-=1;
                    }
                }
                   puts(c);
            }
        }
    }


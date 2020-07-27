#include<stdio.h>
#define size 200
int main()
{
    int n,f[100],p[100],temp,i,j,k,cnt,count;
    char a[size];
    scanf("%d",&n);
    while((scanf("%d",&n))==1)
    {
        if(n==0)
            break;
        int s=0,h=0;
        gets(a);
        for(i=0;i<n;i++)
        {
            int count=0;
        if(a[i]=='Z')
        {
             printf("1\n");
             break;
        }
           else if(a[i]=='D')
            {
                 for(j=i;a[j]!='R';j++)
                    count++;
                 f[s]=count;
                 s++;
            }
            else if(a[i]=='R')
            {
                for(k=i;a[k]!='D';k++)
                    cnt++;
                    p[h]=cnt;
                    h++;
            }

        }
        for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
    {
        if(f[i]>f[j])
        {
            temp=f[i];
            f[i]=f[j];
            f[j]=temp;
        }
    }
    for(i=0;i<s-1;i++)
        for(j=i+1;j<s;j++)
    {
        if(p[i]>p[j])
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
        }
    }
    if(p[0]>f[0])
        printf("%d\n",f[0]);
    else
        printf("%d\n",p[0]);

    }

}

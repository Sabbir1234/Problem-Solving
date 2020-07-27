#include<stdio.h>
#include<string.h>
int main()
{
    int n,x,y,cnt=0,i,X[100],Y[100],flag,m=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    x=0;
    y=0;
    for(i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            y++;
            Y[i]=y;
        }
        if(s[i]=='R')
        {
            x++;
            X[i]=x;
        }
        if(x==y)
        {
            if(x==1 && y==1)
                continue;
            if((X[i-1]>Y[i-1]))
            {
                if(Y[i+1]>X[i+1])
                    cnt++;
            }
            else if(Y[i-1]>X[i-1])
            {
                if(Y[i+1]<X[i+1])
                    cnt++;
            }
        }
    }
    printf("%d\n",cnt);
}

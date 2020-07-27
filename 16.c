#include<stdio.h>
#include<string.h>
int main()
{
char w[40];
int i,a,l;
    while(scanf("%s",w)==1)
    {
        l=strlen(w);
        for(i=0;i<l;i++)
        {
            if(w[i]=='A' || w[i]=='B' || w[i]=='C')
            w[i]='2';
        else if(w[i]=='D'|| w[i]=='E'|| w[i]=='F')
            w[i]='3';
        else if(w[i]=='G'|| w[i]=='H'|| w[i]=='I')
            w[i]='4';
        else if(w[i]=='J'|| w[i]=='K' || w[i]=='L')
            w[i]='5';
        else if(w[i]=='M'|| w[i]=='N' ||w[i]=='O' )
            w[i]='6';
        else if(w[i]=='P'|| w[i]=='Q'|| w[i]=='R'|| w[i]=='S')
            w[i]='7';
        else if(w[i]=='T'|| w[i]=='U'|| w[i]=='V' )
            w[i]='8';
        else if(w[i]=='W'|| w[i]=='X'|| w[i]=='Y'|| w[i]=='Z' )
            w[i]='9';
        }
        printf("%s\n",w);
    }

    }






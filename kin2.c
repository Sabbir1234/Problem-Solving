#include<stdio.h>
int main()
{
    char w[100],temp[100];
    int i,j,count=1,len;
    while(1)
    {

        gets(w);
      len=strlen(w);
    for(i=0;i<len;i++)
    {

        if(w[i]==' ')
            count++;
            if((w[i]<'a' && w[i]>'z') || (w[i]<'A' && w[i]>'Z') )
                continue;

    }
    printf("%d\n",count);
    count=1;
    }



}


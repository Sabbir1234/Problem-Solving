#include<stdio.h>
int main()
{
    char w[100];
    int i,j,count=0;
    while(1)
    {
        for(i=0;(w[i]=getchar())!='\n';i++);
        {
            if(w[i]=' ')
            {
               count++;

            }

        }
        printf("%d\n",count);
    }
}

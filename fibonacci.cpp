#include<stdio.h>
#include<string.h>
#include<vector>
#include<stdlib.h>
using namespace std;
char nn[1001][30],mm[1001][30],s[1001][30],k[1001][30],z[30],y[30];
int n,m,t;
int test(char k[])
{
    int i,j;
    for(i=0;i<n;i++)
    {
        if(strcmp(k,s[i])==0)
        {
           return i;
        }
    }
}
int main()
{
    int i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%s %s",&nn[i],&s[i]);
    }
    for(j=0;j<m;j++)
    {
        int f;
        char c=' ';
        char d='#';
        scanf("%s %s",&mm[j],&k[j]);
        for(f=0;f<strlen(k[j])-1;f++)
            z[f]=k[j][f];
        z[f]='\0';
        int h=test(z);
        printf("%s%c%s%c%c%s\n",mm[j],' ',k[j],c,d,nn[h]);
        //printf("%d\n",h);

    }
}

#include<stdio.h>
#include<string.h>
void left(char a[],char b[])
{
    int i,j=0,l1,l2,k;
    l1=strlen(a);
    l2=strlen(b);

    for(i=l2;i<l1+l2;i++,j++)
    {
        a[i]=a[j];
    }
    for(k=0;k<l2;k++)
    {
        a[k]=b[k];
    }
    a[l1+l2]='\0';


}

int main()
{
    char a[100],b[100];
    gets(a);
    gets(b);
    left(a,b);
    printf("%s\n",a);
}

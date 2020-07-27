#include<stdio.h>
#include<string.h>
int main()
{
    char a[1002],word[100];
    int i=0,l;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(;i<l;i++)
    {
        word[i]=a[i];
        if(a[i+1]==' ')
        {
            word[i+1]='\0';
            good(word,i);
        }

    }
}
void good(char w[],int j)
{
    char fo[100];
    int t,k=0,i;
    fo[k]=toupper(w[j+2]);
    for(t=1;t<=j;)
    {
        if((w[t]<65 && w[t]>90) && (w[t]<97 && w[t]>122))
        {
            continue;
        }

        else
        {
            fo[k]=w[t];
            k++;
        }

    }
    puts(fo);
}

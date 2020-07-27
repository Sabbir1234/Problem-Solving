#include<stdio.h>
#define max_size 100
int main()
{
    char a[max_size];
    int i,count=0,sum=0,cnt=0,l;
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]>='A' && a[i]<='Z')|| (a[i]>='a' && a[i]<='z'))
            count++;
        else if(a[i]>='0' && a[i]<='9')
            cnt++;
        else
            sum++;
    }
    printf("Alphabet is %d\n",count);
    printf("Digit is %d\n",cnt);
    printf("other character is %d\n",sum);

}

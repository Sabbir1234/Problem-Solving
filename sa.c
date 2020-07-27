#include<stdio.h>
#include<ctype.h>
int main()
{
    int i;
    char letter[80];
    scanf("%[^\n]",letter);
    for(i=0;letter[i]!='\0';++i)
    {
        if(((letter[i]>='A') && (letter[i]<'Z'))||((letter[i]>='a') && (letter[i]<'z'))||((letter[i]>='0') && (letter[i]<'9')))
            putchar(letter[i]+1);
        else if(letter[i]=='Z')
            putchar('A');
        else if(letter[i]=='z')
            putchar('a');
        else if(letter[i]== '9')
            putchar('0');
        else
            putchar('.');
    }
}

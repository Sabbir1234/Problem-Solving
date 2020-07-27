#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char stackk[100];
int top=-1;
void push(char c)
{
    top++;
    stackk[top]=c;
}
char pop()
{
    char c=stackk[top];
    top--;
    return c;
}
void show()
{
    printf("\n stack:");
    for(int i=0; i<=top; i++)
    {
        printf("%c",stackk[i]);
    }
    printf("\n");

}
bool isOperator(char c)
{

    if(c=='+' ||c=='-'||c=='*'||c=='/')
    {
        return true;
    }
    else
        return false;
}
int precedence(char c)
{
    if(c=='+'||c=='-')
    {
        return 1;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
    else if(c=='^')
    {
        return 3;
    }
    else
        return 0;
}
int main()
{
    char infix[100],postfix[100];
    int len,k=0,i;
    printf("enter infix :");
    gets(infix);
    len=strlen(infix);
    infix[len]=')';
    push('(');
    for(i=0; i<=len; i++)
    {
        if(infix[i]=='(')
        {

            push(infix[i]);

        }
        else if(infix[i]==')')
        {

            char p=pop();
            while (p!='(')
            {
                postfix[k++]=p;
                p=pop();
            }

        }
        else if(isOperator(infix[i]))
        {

            while (isOperator(stackk[top]) && precedence(stackk[top]) >=precedence(infix[i]))
            {
                postfix[k++]=pop();
            }
            push(infix[i]);

        }
        else
        {

            postfix[k++]=infix[i];


        }
    }
    postfix[k]='\0';
    puts(postfix);
    return 0;
}

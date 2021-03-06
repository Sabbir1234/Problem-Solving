#include<stdio.h>
#include<string.h>
char stk[100];
int top=-1;
void push(char c)
{
    stk[++top]=c;
}
char pop()
{
    char c=stk[top];
    top--;
    return c;
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
    if(c=='+' || c=='-')
        return 1;
    else if(c=='*' || c=='/')
        return 2;
   else  if(c=='^')
        return 3;
    else
        return 0;
}
int main()
{
    int i,k=0;
    char infix[100],postfix[100];
    printf("Enter the infix expression\n");
    gets(infix);
    int len=strlen(infix);
    push('(');
    infix[len]=')';
    for(i=0;i<=len;i++)
    {
        if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            char p;
            p=pop();
            while(p!='(')
            {
                postfix[k++]=p;
                p=pop();
            }
        }
        else if(isOperator(infix[i]))
        {
            while(isOperator(stk[top]) && precedence(stk[top])>=precedence(infix[i]))
            {
                postfix[k++]=pop();
            }
            push(infix[i]);
        }
        else
            postfix[k++]=infix[i];
    }
    postfix[k]='\0';
    puts(postfix);
}

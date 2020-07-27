#include<stdio.h>
#include<math.h>
int stk[100],top=-1;
void push(int a)
{
    stk[++top]=a;
}
int pop()
{
    return stk[top--];
}
bool isOperator(char c)
{
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
        return true;
    return false;
}
int evaluate(int b,int a,char c)
{
    switch(c)
    {
        case '+': return b+a;

        case '-': return b-a;

        case '*': return b*a;

        case '/': return b/a;

        case '^': return pow(b,a);
        default: return 0;
    }
}
int main()
{
    int i;
    char postfix[100];
    printf("Enter postfix expression\n");
    gets(postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(isOperator(postfix[i]))
        {
            int a=pop();
            int b=pop();
            int r=evaluate(b,a,postfix[i]);
            push(r);
        }
        else
        {
            push(postfix[i]-'0');
        }
    }
    printf("%d\n",stk[top]);
}

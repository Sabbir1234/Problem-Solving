#include<stdio.h>
#define Max 100
int stk[Max],top=0;
bool isfull()
{
    if(top==Max-1)
        return true;
    return false;
}
bool isempty()
{
    if(top==0)
    return  true;
    return false;
}
void push()
{
    int n;
    if(isfull())
        printf("Stack full\n");
    else
    {
         printf("Enter the data you want to push\n");
         scanf("%d",&n);
         stk[top]=n;
         top++;
    }

}
void pop()
{
    if(isempty())
        printf("Stack is Empty\n\n");
    else
    {
        top--;
    }
}
void peek()
{
    if(isempty())
        printf("Stack is empty\n\n");
    else
        printf("Peeked Data is %d\n",stk[top]);
}
void display()
{
    int i;
    if(isempty())
        printf("Stack is empty\n\n");
    else
    {
        for(i=0;i<top;i++)
            printf("%d\n",stk[i]);
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1- Push data\n");
        printf("2- Pop the data\n");
        printf("3- Peek the Data\n");
        printf("4- Display the Stack\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: peek();
            break;
            case 4: display();
            break;
            default: printf("Invalid input\n\n");
        }
    }
}

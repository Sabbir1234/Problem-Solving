#include<stdio.h>
#include<stdlib.h>
#define Max 100
int aray[Max];
int frnt=-1,rear=-1;
bool isempty()
{
    if(frnt==-1 && rear==-1)
        return true;
    return false;
}
bool isfull()
{
    if(rear==Max-1)
        return true;
    return false;
}
void enque()
{
    int a;
    if(isfull())
    {
        printf("Sorry stack is full\n");
    }
  else if(isempty())
   {
       rear+=1;
       frnt+=1;
       printf("Enter the Data:\n");
       scanf("%d",&a);
       aray[rear]=a;
   }
   else
   {
       rear+=1;
       scanf("%d",&a);
       aray[rear]=a;

   }


}
void Deque()
{
    int a;
    if(isempty())
        printf("Stack is empty\n");
    else
    {
        frnt++;
    }

}
void peek()
{
    if(isempty())
        printf("Stack is empty\n");
    else
    {
        printf("Peeked data is %d\n",aray[frnt]);
    }
}
void display()
{
    int i;
    if(isempty())
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Elements of stack is/are:\n");
        for(i=frnt;i<=rear;i++)
            printf("%d\n",aray[i]);
    }
}
int main()
{
    int n;
      printf("Welcome to the stack\n");
    while(1)
    {

      printf("Enter your choice:\n");
      printf("1- Enque\n");
      printf("2- Deque\n");
      printf("3- Peek\n");
      printf("4- Display\n");
      scanf("%d",&n);
    switch(n)
    {
       case 1:enque();
       break;
       case 2:Deque();
       break;
       case 3:peek();
       break;
       case 4:display();
       break;
       default: printf("Invalid input\n");
    }

    }


}

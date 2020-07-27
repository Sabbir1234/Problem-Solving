#include<stdio.h>
#include<stdlib.h>
#define max 100
int array[max];
int front=-1,rear=-1;
bool isempty()
{
    if(front==-1 && rear==-1)
        return true;
    return false;
}
bool isfull()
{
    if(rear==max-1)
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
       front+=1;
       printf("Enter the Data:\n");
       scanf("%d",&a);
       array[rear]=a;
   }
   else
   {
       rear+=1;
       scanf("%d",&a);
       array[rear]=a;

   }


}
void deque()
{
    int a;
    if(isempty())
        printf("Stack is empty\n");
    else
    {
        printf("Enter the Data:\n");
        scanf("%d",&a);
        front--;
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
        for(i=front;i<=rear;i++)
            printf("%d\n",array[i]);
    }
}
int main()
{
    while(1)
    {
      printf("Welcome to the stack\n");
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
       case 2:deque();
       break;
       case 3:peek();
       break;
       case 4:display();
       break;
       default: printf("Invalid input\n");
    }

    }


}

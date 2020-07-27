#include <stdio.h>
#define MAX 10
int A[MAX],front=-1,rear=-1;

bool isemp()
{
    if(front==-1 && rear==-1)
        return true;
        return false;
}
bool isfull()
{
    if(rear==MAX)
        return true;
    return false;
}
void enqueue(int x)
{
    if(isfull()){
        printf("full\n");
        return;
    }
    else if(isemp())
        front=0,rear=0;
    else
        rear=(rear+1)%MAX;
    A[rear]=x;
}
void dequeue()
{
    if(isemp())
        return;
    else if(front == rear)
        front=-1,rear=-1;
    else
        front=(front+1)%MAX;
}

void  display()
{
    for(int i=front;i<=rear;i++)
        printf("%d ",A[i]);
    printf("\n");
}
int main()
{
    enqueue(1);
    enqueue(2);
    display();
    enqueue(3);
    enqueue(4);
    enqueue(5);
    display();
    dequeue();
    display();
    enqueue(6);
    enqueue(7);
    display();
    enqueue(8);
    enqueue(9);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    display();
    dequeue();
    display();

}

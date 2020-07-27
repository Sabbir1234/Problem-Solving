#include<stdio.h>
#define Max 100
int ar[Max];
int frnt=-1;
int rear=-1;
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
void enq()
{
    int n;
    if(isfull())
    {
        printf("Queu is full\n");
        return;
    }
    else if(isempty())
    {
        frnt=0;
        rear=0;
    }
    else
    {
        rear++;
    }
    printf("Enter the data\n");
    scanf("%d",&n);
    ar[rear]=n;

}
void deq()
{
    if(isempty())
    {
        printf("Que is empty\n");
        return;
    }
    else if(frnt==rear)
    {
        frnt=-1;
        rear=-1;
        printf("Que is empty\n");
    }
    else
        frnt++;

}
void ft()
{
    printf("Peeked data is: %d\n",ar[frnt]);
}
void show()
{
    int i;
    if(isempty())
        printf("Que is empty\n");
    else
    for(i=frnt;i<=rear;i++)
    {
        printf("%d\n",ar[i]);
    }
}
int main()
{
    int n;
    while(1)
    {
        printf("1- Enque\n");
        printf("2- Deque\n");
        printf("3- Front\n");
        printf("4- show\n");
        printf("Enter ur choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:enq();
            break;
            case 2:deq();
            break;
            case 3:ft();
            break;
            case 4:show();
            break;
            default:printf("Invalid input\n");
        }
    }
}

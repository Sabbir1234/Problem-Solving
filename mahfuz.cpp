#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    int key;
    struct node *next;
};
struct node *start=NULL;
struct node *current=NULL;
bool isEmpty()
{
    if(start==NULL)
        return true;
    return false;
}
void listinsert(int key,int data)
{
    struct node *item;
    item=(struct node *)malloc(sizeof(struct node));
    item->key=key;
    item->data=data;
    item->next=start;
    start=item;
}
void showlist()
{
    if(isEmpty())
        printf("List is empty\n");
    else
    {
        current=start;
       while(current!=NULL)
    {
       printf("KEY: %d\tData: %d\n",current->key,current->data);
       current=current->next;
    }
    }

}
int main()
{
    listinsert(1,10);
    listinsert(2,20);
    listinsert(3,30);
    listinsert(4,40);
    showlist();
}

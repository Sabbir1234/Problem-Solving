#include<stdio.h>
#include<stdlib.h>
struct node{
 int data;
 struct node* link;

};
struct node* head=NULL;
void insert(int data)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));
   temp->data=data;
   temp->link=NULL;
   if(head==NULL)
   {
       head=temp;
   }
   else
   {
       struct node* current;
    current=head;
       while(current->link!=NULL)
       {
           current=current->link;
       }
       current->link=temp;
   }
}
void display()
{
    struct node* current=head;
    while(current!=NULL)
    {
        printf("%d\n",current->data);
        current=current->link;
    }
}
int main()
{
   insert(10);
   insert(20);
   insert(30);
    insert(40);
     insert(50);
      insert(60);
      display();
}

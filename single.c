#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
struct node* pre;
};
struct node* head=NULL;
void append()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&temp->data);
    //temp->next=NULL;
    //temp->pre=NULL;
    if(head==NULL)
    {
        temp->pre=NULL;
        head=temp;
        temp->next=NULL;
    }
    else
    {
        struct node* current;
        current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=temp;
        temp->pre=current;
        temp->next=NULL;
    }
}
void insertatbegin()
{

    int n; struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter The Data\n");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
}
void insertatmiddle()
{
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     int n,loc,i=0;
    scanf("%d",&n);
    temp->data=n;
    printf("After which index you want to insert\n");
    scanf("%d",&loc);
    struct node* current;
        current=head;
        while(i<loc-1)
        {
            current=current->next;
            i++;
        }
        temp->next=current->next;
        temp->pre=current;
        current->next=temp;


}
void Delete()
{
    int loc,i=1;
    struct node* current;
        current=head;
         struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the location frrom where you want to delete\n");
    scanf("%d",&loc);
    while(i<loc-1)
    {
        current=current->next;
        i++;
    }
    temp=current->next;
    current->next=temp->next;
}
void show()
{
    struct node* current;
        current=head;
        while(current!=NULL)
        {
            printf("DATA is %d\n",current->data);
            current=current->next;
        }
}
int main()
{
    int n;
    while(1)
    {
         printf("1- Append\n");
         printf("2- Insert at begin\n");
         printf("3- Insert at middle\n");
         printf("4- Delete\n");
         printf("5- Show the list\n");
         printf("Enter your choice\n");
         scanf("%d",&n);
         switch(n)
         {
             case 1:append();
             break;
             case 2:insertatbegin();
             break;
             case 3:insertatmiddle();
             break;
             case 4:Delete();
             break;
             case 5:show();
             break;
             default:printf("Invalid input ,try again\n");
             break;
         }
    }


}

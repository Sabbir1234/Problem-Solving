#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
struct node* head=NULL;
struct node* p;
void append()
{
    int n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data\n");
    scanf("%d",&n);
    if(head==NULL)
    {
       p=(struct node*)malloc(sizeof(struct node));
       p->data=n;
       head=p;


    }
    else
    {
        p->next=temp;
        temp->data=n;
        temp->next=head;
        p=temp;


    }
}
void atbegin()
{
    int n;
     struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data\n");
    scanf("%d",&n);
    struct node* q;
    q=head;
    temp->data=n;
    temp->next=q->next;
    head=temp;
}
void atmiddle()
{
    int n,loc,i=0;
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     struct node* q;
    printf("Enter the Data\n");
    scanf("%d",&n);
    printf("Enter the location after u want to insert\n");
    scanf("%d",&loc);
    q=head;
    while(i<loc-1)
    {
        q=q->next;
        i++;
    }
    temp->data=n;
    temp->next=q->next;
    q=temp;
}
void Delete()
{
   int n,loc,i=0;
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     struct node* q;
     struct node* t;
    printf("Enter the location from where u want to delete\n");
    scanf("%d",&loc);
     while(i<loc-2)
    {
        q=q->next;
        i++;
    }
    t=q->next;
    q=t->next;

}
void show()
{
    struct node* current=head;
   while(current->next!=head)
   {

       printf("Data is : %d\n",current->data);
       current=current->next;
   }
   printf("Data is : %d\n",current->data);
}
int main()
{
    int n;
    while(1)
    {
        printf("1- Append\n");
        printf("2- At Begin\n");
        printf("3- At Middle\n");
        //printf("- At Last\n");
        printf("4- Delete\n");
        printf("5- Show\n");
        printf("Enter ur choice\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:append();
            break;
            case 2:atbegin();
            break;
            case 3:atmiddle();
            break;
            //case 4:atlast();
            //break;
            case 4:Delete();
            break;
            case 5:show();
            break;
            default: printf("Invalid input\n");
        }
    }
}

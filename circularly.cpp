#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
};
struct node* head=NULL;
struct node* p;
void append()
{
    int n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
struct node* p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data\n");
    scanf("%d",&n);
    if(head==NULL)
    {

        p->data=n;
        head=p;
    }
    else
    {
        temp->data=n;
        p->next=temp;
        temp->next=head;
        p=temp;
    }
}
void atbegin()
{
    int n;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
     struct node* q=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data\n");
    scanf("%d",&n);
    temp->data=n;
    q=head;
    temp->next=q->next;
    head=temp;


}
void show()
{
     struct node* current;
     current=head;
    printf("Data is : %d\n",current->data);
   while(current!=p)
   {
       current=current->;
       printf("Data is : %d\n",current->data);


   }
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter ur choice:\n");
        printf("1- Inssert a node\n");
        printf("2- Insert at begin\n");
        printf("3- Insert at last\n");
        printf("4- show\n");
        printf("\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1: append();
            break;
            case 2: atbegin();
            break;
            //case 3: atlast();
            //break;
            case 4: show();
            break;
            default: printf("Invalid input\n");
            break;
        }
    }
}

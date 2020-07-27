#include<stdio.h>
int l;
struct node
{
    int data;
    struct node* next;
};
struct node* root=NULL;
void append()
{
    int a;
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data:\n");
    scanf("%d",&(temp->data));
    temp->next=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node* current;
        current=root;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        current->next=temp;
    }
}
void begin()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter The Data:\n");
    scanf("%d",&(temp->data));
    temp->next=root;
    root=temp;
}
void display()
{
    struct node* current;
    current=root;
    while(current!=NULL)
    {
        printf("Data is %d\n",current->data);
        current=current->next;
    }
}
int length()
{
    int cnt=0;
    struct node *current=root;
    while(current!=NULL)
    {
        current=current->next;
        cnt++;
    }
    l=cnt;
    return l;
}
void definite()
{
    int n,a,cnt=1;
    int l=length();
    printf("After which position you want to place?\n");
    printf("Enter position and the data:\n");
    scanf("%d %d",&n,&a);
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=a;
    temp->next=NULL;
    struct node* current=root;
    if(n>l)
        printf("Invalid input\n");
    else
    {
        while(cnt<n)
    {

        current=current->next;
        cnt++;

    }
    temp->next=current->next;
    current->next=temp;
    }


}
void Delete()
{
    int c,i=1;
    struct node* current;
    printf("Enter the node number you want to delete:\n");
    scanf("%d",&c);
    if(c==1)
    {
        current=root->next;
        root=current;

    }
    else
    {
        current=root;
        while(i<c-1)
    {
       current=current->next;
       i++;
    }
    struct node* p=current->next;
    current->next=p->next;

    }


}
int main()
{
    int n,l;
    while(1)
    {
        printf("Enter 1 to append new node at the end\n");
        printf("Enter 2 to append new node at the bigin\n");
        printf("Enter 3 to display the present length\n");
        printf("Enter 4 to append after definite position\n");
        printf("Enter 5 to delete a node\n");
        printf("Enter 6 to display the list\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:append();
            break;
            case 2:begin();
            break;
            case 3: l=length();
                 printf("%d\n",l);
            break;
            case 4: definite();
            break;
            case 5: Delete();
                   break;
            case 6: display();
            break;
            default:
             printf("Invalid input\n");

        }

    }
}

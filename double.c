#include<stdio.h>
#include<stdlib.h>
int l;
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("Enter the Data:\n");
    scanf("%d",&temp->data);
    if(root==NULL)
        root=temp;
    else
    {
        struct node* current=root;
        while(current->right!=NULL)
        {
            current=current->right;
        }
        current->right=temp;
        temp->left=current;
    }
}
void begin()
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node* current=root;
    printf("Enter the Data:\n");
    scanf("%d",&temp->data);
    temp->right=current;
    temp->left=NULL;
    root=temp;
}
int length()
{
    int cnt=0;
    struct node *current=root;
    while(current!=NULL)
    {
        current=current->right;
        cnt++;
    }
    l=cnt;
    return l;
}
void Delete()
{
    struct node* current=root;
    int loc,i=1;
    printf("Which location you want to delete:\n");
    scanf("%d",&loc);
    while(i<loc)
    {
        current=current->right;
        i++;
    }
    struct node* p= current->right;
    struct node* q=current->left;
    q->right=p;
    p->left=q;
}
void display()
{
    struct node* current=root;
    while(current!=NULL)
    {
        printf("Data is: %d\n",current->data);
        current=current->right;
    }
}
int main()
{
    int n;
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
            /*case 4: definite();
            break;*/
            case 5: Delete();
                   break;
            case 6: display();
            break;
            default:
             printf("Invalid input\n");

        }
    }


}

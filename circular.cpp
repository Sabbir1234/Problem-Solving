#include<stdio.h>
#include<stdlib.h>
int l=1;
struct node
{
    int data;
    struct node* link;
};
struct node* root=NULL;
struct node* p;
int length()
{
    struct node* current=root;
    while(current!=p)
    {
        l++;
        current=current->link;
    }
    return l;
}
void listinsert()
{
    int a;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the Data:\n");
    scanf("%d",&a);
    if(root==NULL)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=a;
        root=p;
    }
    else
    {
       p->link=temp;
       temp->data=a;
       temp->link=root;
       p=temp;
    }

}
void Begin()
{
    int a,l;
    l=length();
    struct node* temp= (struct node*)malloc(sizeof(struct node));
    printf("Enter the Data to store at begin:\n");
    scanf("%d",&a);
    temp->data=a;
    if(l==1)
    {
        temp->link=p;
        root=temp;
        p->link=root;
    }
    else
    {
        struct node* q=root;
        temp->link=q;
        root=temp;
    }

}
void middleinsert()
{
    int loc,i=1,a;
    struct node* current=root;
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    struct node* q;
    printf("After which location you want to insert\n");
    scanf("%d",&loc);
    printf("Enter the Data:\n");
    scanf("%d",&a);
    temp->data=a;
    while(i<loc)
    {
        current=current->link;
        i++;
    }
    temp->link=current->link;
    current->link=temp;

}
void Delete()
{
    struct node* current=root;
     struct node* q;
    int loc,i=1;
    printf("Enter the location you want to delete\n");
    scanf("%d",&loc);
    while(i<loc-1)
    {
       current=current->link;
       i++;
    }
    q=current->link;
    current->link=q->link;
}
void Search()
{
    int a,flag=0,i=2;
    struct node* current=root;
     struct node* q=current->link;
    printf("Enter the data you want to search\n");
    scanf("%d",&a);
    if(current->data==a)
        printf("Yes, I got it in node no: 1\n");
    else
    {
        while(q!=root)
        {
            if(q->data==a)
            {
                flag=1;
                break;
            }
            q=q->link;
            i++;
        }
        if(flag==1)
        printf("Yes, i got it in node no:%d\n",i);
        else
            printf("Not found\n");
    }

}
void display()
{
   struct node* current=root;
   printf("Data is : %d\n",current->data);
   while(current!=p)
   {
       current=current->link;
       printf("Data is : %d\n",current->data);


   }
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter 1 to insert a new node\n");
        printf("Enter 2 to insert at begin\n");
        printf("Enter 3 to insert at middle\n");
        printf("Enter 4 to display the length\n");
        printf("Enter 5 to display the list\n");
        printf("Enter 6 to search a particular data\n");
        printf("Enter 7 to delete a node\n");
        scanf("%d",&n);
        switch(n)
        {
           case 1: listinsert();
           break;
           case 2: Begin();
            break;
           case 3: middleinsert();
            break;
           case 4: length();
            printf("The length of list is %d\n",l);
            break;
           case 5: display();
           break;
           case 6: Search();
               break;
          case 7: Delete();
          break;
           default: printf("Invalid input\n");
        }

    }

}

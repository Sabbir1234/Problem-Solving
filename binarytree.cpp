#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* left;
  struct node* right;
};
struct node* root=NULL;
void Insert(int d,int c)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=d;
    p->left=NULL;
    p->right=NULL;
    if(root==NULL)
    root=p;
    else
    {
        struct node* current=(struct node*)malloc(sizeof(struct node));
        if(c==1)
        {
           current=root;
           while(current->left!=NULL)
           {
               current=current->left;
           }
           current->left=p;

        }
        else
        {
           current=root;
           while(current->right!=NULL)
           {
               current=current->right;
           }
           current->right=p;
        }
    }

}
void show(struct node* root)
{
    if(root==NULL)
        return;
    printf("%d ",root->data);
    show(root->left);
    show(root->right);

}
int main()
{
    int n;
    printf("Number of nodes\n");
    scanf("%d",&n);
    Insert(2,1);
    Insert(3,1);
    Insert(4,2);
    Insert(5,1);
    Insert(6,2);
    show(root);


}

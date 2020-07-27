#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* left;
  struct node* right;

};
struct node* root=NULL;
struct node* new_node(int item)
{
   struct node* a=(struct node*)malloc(sizeof(struct node));
   a->data=item;
   a->left=NULL;
   a->right=NULL;
   return (a);
}
void show()
{
    struct node* current=(struct node*)malloc(sizeof(struct node));
    current=root;
    int f=1;
    while(current->left!=NULL || current->right!=NULL)
    {
        struct node* p=(struct node*)malloc(sizeof(struct node));
        struct node* q=(struct node*)malloc(sizeof(struct node));
        p=current->left;
        q=current->right;
        printf("%d %d %d",current->data,p->data,q->data);
        if(f==1)
        {
           current=p;
           f=2;
        }
        else
        {
            current=q;
            f=1;
        }
    }

}
int main()
{
    root=new_node(1);
    root->left=new_node(2);
    root->right=new_node(3);
    root->left->left=new_node(4);
    show();
    //printf("%d\n",root->data);

}

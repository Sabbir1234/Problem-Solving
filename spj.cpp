#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
 int key;
 struct node *left, *right;
};
struct node* Search(struct node* root, int key)
{
   if (root == NULL || root->key == key)
       return root;
    if (root->key < key)
       return Search(root->right, key);
    return Search(root->left, key);
}
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
void Inorder(struct node *root)
{
    if (root != NULL)
    {
        Inorder(root->left);
        printf("%d \n", root->key);
        Inorder(root->right);
    }
}
struct node* Insert(struct node* node,int key)
{
    if(node==NULL)
    {
        return newNode(key);
    }
    if(key<node->key)
    {
         node->left  = Insert(node->left,key);
    }
    if(key>node->key)
    {
        node->right = Insert(node->right,key);
    }
    return node;
}

int main()
{
    struct node *root = NULL;
    root = Insert(root,50);
    Insert(root,30);
    Insert(root,20);
    Insert(root,40);
    Insert(root,50);
    Insert(root,8);
    Insert(root,12);
    Inorder(root);
    struct node *sValue=Search(root,1000);
    if(sValue==NULL)
        printf("Not in the tree\n");
    else
        printf("Got %d\n",sValue->key);

}

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *start=NULL;
struct node *current=NULL;
bool Empty()
{
    if(start==NULL)
        return true;
    return false;
}
void Insert(int a)
{
    struct node *pa;
    pa=(struct node *)malloc(sizeof(struct node));
    pa->data=a;
    pa->next=start;
    start=pa;
}
/*void insertatbegin(int c)
{

}*/
void showme()
{
    if(Empty())
        printf("The list is empty or is not inserted\n");
    else
    {
        current=start;
        while(current!=NULL)
        {
            printf("Data u have inserted : %d\n",current->data);
            current=current->next;
        }
    }
}
int main()
{
    Insert(36);
    Insert(16);
    Insert(3);
    Insert(2);
    Insert(11);
    //inseratbegin(5);
    showme();
    printf("\n");
    printf("%d\n",start->next);
}

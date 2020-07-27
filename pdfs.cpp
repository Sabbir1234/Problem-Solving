#include<stdio.h>
int n,e,stk[100],top=-1,visited[100],mat[100][100];
void push(int a)
{
    stk[++top]=a;
}
int pop()
{
    return stk[top--];
}
bool isEmpty()
{
    if(top==-1)
        return true;
    return false;
}
void DFS()
{
    int current,i;
    while(!isEmpty())
    {
        current=pop();
        for(i=0;i<n;i++)
        {
            if(mat[current][i]==1 && visited[i]==0)
            {
                push(i);
                visited[i]=1;
            }
        }
        printf("%d ",current);
        visited[current]=2;
    }
}
int main()
{
    int n1,n2,a,i,j;
    printf("Enter node and edge\n");
    scanf("%d %d",&n,&e);
    for(i=0;i<n;i++)
    {
        visited[i]=0;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        mat[i][j]=0;
    for(i=1;i<=e;i++)
    {
        scanf("%d %d",&n1,&n2);
        mat[n1][n2]=1;
    }
    printf("Enter the starting node\n");
    scanf("%d",&a);
    push(a);
    visited[a]=0;
    DFS();

}

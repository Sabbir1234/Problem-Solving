#include<stdio.h>
int stk[100],top=-1,e,n,visited[100];
int mat[100][100];
void PUSH(int item)
{
    stk[++top]=item;
}
int POP()
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
        current=POP();
        for(i=0;i<n;i++)
        {
            if(mat[current][i]==1 && visited[i]==0)
            {
                PUSH(i);
                visited[i]=1;
            }
        }
        printf("%d ",current);
        visited[current]=2;
    }
}
int main()
{
    int start,n1,n2,i,j;
    scanf("%d %d",&n,&e);
    for(i=0;i<n;i++)
    {
       visited[i]=0;
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
        mat[i][j]=0;
    }
    for(i=1;i<=e;i++)
    {
        scanf("%d %d",&n1,&n2);
        mat[n1][n2]=1;
    }
    printf("Starting node?\n");
    scanf("%d",&start);
    PUSH(start);
    visited[start]=1;
    DFS();
}

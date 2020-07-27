#include<stdio.h>
int qu[100],frnt=-1,rear=-1,e,n,visited[100];
int mat[100][100];
void en(int item)
{
    qu[++rear]=item;
}
int dq()
{
    return qu[++frnt];
}
bool isEmpty()
{
    if(frnt==rear)
        return true;
    return false;
}
void BFS()
{
    int current,i;
    while(!isEmpty())
    {
        current=dq();
        for(i=0;i<n;i++)
        {
            if(mat[current][i]==1 && visited[i]==0)
            {
                en(i);
                visited[i]=1;
            }
        }
        printf("%d ",current);
        //visited[current]=2;
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
    en(start);
    visited[start]=1;
    BFS();
}

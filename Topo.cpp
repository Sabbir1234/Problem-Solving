#include <stdio.h>
#include <stdbool.h>
#define SZ 100
#define STK_SZ 1000
int n, e, visited[SZ], mat[SZ][SZ],
 s[SZ], f[SZ], k, STK[STK_SZ],
 TOP = -1;
bool isEmpty()
{
    if(TOP == -1)
        return true;
    return false;
}
void Push(int item)
{
    STK[++TOP] = item;
}
int Pop()
{
    return STK[TOP--];
}
void DFS(int i)
{
    int j;
    for(j=0;j<n;j++)
    {
        if(visited[j] == 0
           && mat[i][j] == 1)
        {
            s[j] = ++k;
            visited[j] = 1;
            DFS(j);
            f[j] = ++k;
            Push(j);
        }
    }
    return;
}
int main()
{
    int a, b, i, j;
    scanf("%d %d", &n, &e);
    for(i=0;i<n;i++)
    {
        visited[i] = 0;
        for(j=0;j<n;j++)
            mat[i][j] = 0;
    }
    for(i=0;i<e;i++)
    {
        scanf("%d %d", &a, &b);
        mat[a][b] = 1;
    }
    k = 0;
    for(i=0;i<n;i++)
    {
        if(visited[i]==0)
        {
            s[i] = ++k;
            visited[i] = 1;
            DFS(i);
            f[i] = ++k;
            Push(i);
        }
    }
    printf("\n\nStarting and Finishing time:\n");
    for(i=0;i<n;i++)
    {
        printf("node %d: %d/%d\n", i, s[i], f[i]);
    }
    printf("\n\nTopologically sorted nodes:\n");
    while(!isEmpty())
    {
        printf("%d ", Pop());
    }
}

#include<bits/stdc++.h>
using namespace std;
void dfs(int s)
{
    int cnt=1;
    if(s==0)return;
    printf("%d\n",s);
    printf("%d\n",cnt);
    cnt++;
    dfs(s-1);
}
int main()
{
    dfs(10);
}

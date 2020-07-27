#include<bits/stdc++.h>
using namespace std;
int flag=0;
void fun(int n)
{
    int a=n%10;
    int b;
    n=n/10;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
    }
    if(b==a)
       {
           flag=1;
           return ;
       }
}
int main()
{
    int b=456;
    fun(b);
    if((b>=0 && flag==1) || (b>=0 && b<=9))
        printf("Yes\n");
    else
        printf("No\n");
}

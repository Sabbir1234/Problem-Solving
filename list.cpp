#include<stdio.h>
#include<list>
#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
   list<int>l;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       cin>>i;
       l.push_back(i);
   }
   list<int>::iterator it;
   it=find(l.begin(),l.end(),5);
   l.insert(it,4);
   for(it=l.begin();it!=l.end();it++)
   {
       printf("%d\n",*it);
   }
}

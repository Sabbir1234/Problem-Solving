#include<stdio.h>
#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
bool myfun(int a,int b)
{
    return(a>b);
}
int main()
{
    int i,j;
    vector<int>vec;
    vector<int>::iterator it;

    for(i=0,j=5;i<5;i++,j--)
       vec.push_back(i+1);
    sort(vec.begin(),vec.begin()+3,myfun);

    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<endl;
}

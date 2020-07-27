#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<deque>
using namespace std;
int main()
{
    int i;
   deque<int>dq(5,-2);
   dq.push_back(5);
    dq.push_front(10);
    dq.pop_front();
   for(i=0;i<dq.size();i++)
    cout<<dq[i]<<endl;


}

#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
     int ar[10],x;
    cin>>x;
    for(int i=0;i<x;i++)
        cin>>ar[i];
    sort(ar,ar+x);
    for(int i=0;i<x;i++)
        cout<< ar[i];
}

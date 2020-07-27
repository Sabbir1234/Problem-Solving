#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int position[200],n;
    cin>> n;
    for(int i=1,x;i<=n;i++){
        cin>>x;
        position[x]=i;
    }
    for(int i=1;i<=n;i++)
        cout<< position[position[i]] << endl;
}

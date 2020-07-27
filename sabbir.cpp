#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int a[3],b=10000,i;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    sort(a,a+3);

        cout<<(a[2]-a[1])+(a[1]-a[0])<<endl;

}

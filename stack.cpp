#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int>v;
    vector<int>v1;
    v.push_back(1);
    v1.push_back(v[0]);
    for(i=0;i<1;i++)
        printf("%d\n",v1[i]);
}

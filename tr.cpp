#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v[10];
int main()
{
    v[1].push_back(make_pair(1,7));
    if(v[1][0].second)
        printf("%d\n",v[1][0].second);
    else
        printf("y\n");
}

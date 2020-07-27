#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,i,j;
    cin>>a>>b>>c>>d;
    pair<int,int>x,y,z;
    x=make_pair(a,b);
    y=make_pair(b,c);
    z=make_pair(c,d);
    for(i=z.first;i<=z.second;i++)
    {
        a=i+1;
        b=x.second;
    }



}

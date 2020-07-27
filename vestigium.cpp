#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct node{
   int u,v;
};
node a[1001];

bool acompare(node lhs, node rhs) { return lhs.num1 < rhs.num1; }
int main()
{
    int t,n,i,j,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            a[i].u=x; a[i].v;
        }
        sort(a,a+n,acompare);
        for()
    }
}

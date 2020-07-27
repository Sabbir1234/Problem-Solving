#include<bits/stdc++.h>
#include<set>
using namespace std;
set<int>s;
set<int>:: iterator it,it2;
int main()
{
    int n,a,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        s.insert(a);
    }
    it2=s.end();
    s.erase(*it2);
    printf("%d\n",*s.end());
    s.clear();
}

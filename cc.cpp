#include<bits/stdc++.h>
using namespace std;
#define ll long long
unordered_set<int>ml;
unordered_set<int>:: iterator it;
int main()
{
    long long n,k,i,j=0,a;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(ml.find(a)!=ml.end())
            continue;
        if(ml.size()==k )
          ml.erase(ml.begin());
           ml.insert(a);
    }
    cout<<ml.size()<<endl;
    for(it=ml.begin();it!=ml.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

}

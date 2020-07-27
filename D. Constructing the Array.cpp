#include<bits/stdc++.h>
using namespace std;
int ar[200009];
struct cmp{
        bool operator() (const pair<int,int>&a , const pair<int,int>&b) const
        {
            int lena = a.second - a.first + 1;
            int lenb = b.second - b.first + 1;
            if (lena == lenb) return a.first < b.first;
		     return lena > lenb;
        }

};
int main()
{
    int t,n,i,j,l,r,mid;
    pair<int,int>p;
    cin>>t;
    while(t--)
    {
        cin>>n;
        set<pair<int, int>, cmp> segs; memset(ar,0,sizeof(ar));
        segs.insert({0,n-1}); i=1;
        while(!segs.empty())
        {
            pair<int,int>p;
            p= *segs.begin();
            segs.erase(segs.begin());
            mid = (p.first+p.second)/2;
            ar[mid]=i++;
            if(p.first<mid)
            segs.insert({p.first,mid-1});
            if(p.second>mid)
            segs.insert({mid+1,p.second});
        }
        for(i=0;i<n;i++)
            printf("%d ",ar[i]);
        cout<<endl;



    }


}

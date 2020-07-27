#include<bits/stdc++.h>
using namespace std;
map<string,int>mp;
vector<pair<int,int> >v[100009];
int bound(int x,int r,int flag)
{
    int mid;
    int sz=v[x].size(); pair<int,int>p;
    int low=0,high=sz-1;
    //mid = (low+high+1)/2;
    while(low<=high)
    {

        mid=(low+high+1)/2;
        p = v[x][mid];
        if(p.first==r)
        {
            if(flag==1)
                return p.second-1;
            return p.second;
        }
        if(r>p.first)
        {
            low=mid+1;
        }
        else if(r<p.first)
        {
            high=mid-1;
        }

    }
    p = v[x][high];
    return p.second;
}
int main()
{
    int n,i,j,q,x,l,r,k=1,R,L;
    string s;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        if(mp[s])
        {
            x=mp[s];
            q=v[x].size();
            q=v[x][q-1].second;
            v[x].push_back(make_pair(i,q+1));
        }
        else
        {
           mp[s]=k;
           v[k].push_back(make_pair(i,1));
           k++;
        }
    }
    cin>>q;
    for(i=1;i<=q;i++)
    {
        cin>>l>>r>>s;
        if(!mp[s])
          {
              printf("0\n");
              continue;
          }
        x=mp[s];
        R=bound(x,r,2);
        L=bound(x,l,1);
        //printf("r = %d bound = %d\n",r,R);
        //printf("l = %d bound = %d\n",l,L);
        printf("%d\n",R-L);

    }
}

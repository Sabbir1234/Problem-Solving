#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>>v;
int main()
{
    int t,n,i;
    cin>>t;
    while(t--)
    {
        cin>>n; int  cn=0,j=0,e=0,o=0,a,k;
        for(i=1;i<=2*n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                if(e==0)
                {
                    e++;
                    k=i;
                }
                else
                {
                   v.push_back(make_pair(k,i));
                   e=0;
                }
            }

            else
            {
                if(o==0)
                {
                    o++;
                    j=i;
                }
                else
                {
                   v.push_back(make_pair(j,i));
                   o=0;
                }
            }


        }

        for(i=0;i<n-1;i++)
        {
            printf("%d %d\n",v[i].first,v[i].second);
        }

        v.clear();
    }
}

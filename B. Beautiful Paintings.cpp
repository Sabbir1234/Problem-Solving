#include<bits/stdc++.h>
using namespace std;
queue<int>st;
int ar[1010];
int main()
{
    int n,i,last,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i=1;i<n;i++)
    {
        if(ar[i]>ar[i-1])
        {
            cnt++;
        }
        else
        {
            if(!st.empty() && ar[i]>st.front())
            {
                cnt++;
                st.pop();
            }
             st.push(ar[i-1]);
        }

    }
    printf("%d\n",cnt);
}

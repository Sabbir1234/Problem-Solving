#include<bits/stdc++.h>
using namespace std;
int ar[200009];
int main()
{
    int n,i,x=1,cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(ar[i]==x)
        {
            cnt++;
            x++;
        }
    }
    if(cnt)
    {
        printf("%d\n",n-cnt);
    }
    else
        printf("-1\n");
}

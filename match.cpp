#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q,i;
    cin>>q;
    while(q--)
    {
        cin>>n;
        if(n%2==0)
        {
            if(n==2)
                printf("2\n");
            else
                printf("0\n");

        }
        else
        {
            printf("1\n");
        }
    }
}

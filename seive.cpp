#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool mark[1000000]={false};
void seive(int n)
{
    ll i,j;
    mark[1]=false;
    for(i=2;i*i<n;i++)
    {
        if(mark[i]==false) // then i is prime
        {
            for(j=i*i;j<=n;j+=i)
            {
                mark[j]=true;
            }
        }
    }
}
int main()
{
    freopen("gold.txt","w",stdout);
    ll n,c,i,j,flag,k;
    seive(1000000);
    //if(mark[237131]==false)
        //printf("yes\n");
    while(scanf("%lld",&n)==1)
    {
        flag=1;
        if(n==0)break;
        for(i=3,j=n-3;i<=n;i+=2,j-=2)
        {
            if(mark[i]==false && mark[j]==false)
            {
                flag=0;
                printf("%lld = %lld + %lld\n",n,i,j);
                break;
            }
        }
        if(flag)
            printf("Goldbach's conjecture is wrong.\n");
    }

}

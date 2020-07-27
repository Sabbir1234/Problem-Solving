#include<bits/stdc++.h>
using namespace std;
#define n 20000005


long long int prm[n];
bool arr[n];

void seive()

{
    long long int num,k,j,f=1;
    arr[0]=1;
    arr[1]=1;
    prm[2]=0;

    for(long long int i=4; i<=n; i=i+2)
    {
        arr[i]=1;
    }
    for(long long int i=3; i<=sqrt(n); i+=2)
    {
        if(arr[i]==0)
        {
            for(long long int j=i*i; j<=n; j=j+i*2)
            {
                arr[j]=1;
            }
        }
    }

    for(long long int p=2; p<=n; p=p+1)
    {
        if(arr[p]==0)
        {
            prm[f]=p;
            f++;
        }

    }
}

int main()
{
    long long int t,a,b,c,i=1;

    seive();

    while (scanf("%lld %lld",&a,&b)==2 && a>0 && b>0)
    {
        c=prm[a]+prm[b];
        if(c%2==0)
            printf("Case %d: Even.\n",i);
        else printf("Case %d: Odd.\n",i);
        i++;
    }
    return 0;
}



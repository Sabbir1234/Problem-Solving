#include<bits/stdc++.h>
using namespace std;

int main ()
{
    unsigned long long int a,b,test ;
    scanf("%llu",&test);
    for(int i=1; i<=test; i++)
    {
        scanf("%llu %llu",&a,&b);
        if(a>b)
            printf("Case %d: A\n",i);
        else if(a<b)
            printf("Case %d: B\n",i);
        else
            printf("Case %d: Same\n",i);
    }

    return 0;
}


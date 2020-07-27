#include<bits/stdc++.h>
using namespace std;
#define LL long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        LL n,ans=0,i;
        cin >> n;
        for(i=1; i*i<=n; i++)
        {
            if(n%i==0)
            {
                if(i*i==n)
                {
                    ans++;
                    continue;
                }
                if(i%2==0)ans++;
                if((n/i)%2==0)ans++;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

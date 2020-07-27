#include<bits/stdc++.h>
using namespace std;
vector<int>ab,ba;
int main()
{
    string s;
    int i,j,flag=0,f1=0,f2=0;
    cin>>s;
    for(i=0;i<s.size()-1;i++)
    {

        if((s[i]=='A' && s[i+1]=='B'))
        {
            f1=1;
            ab.push_back(i+i+1);
            //printf("ab %d\n",i+i+1);
        }
        else if((s[i]=='B' && s[i+1]=='A'))
        {
            f2=1;
            ba.push_back(i+i+1);
            //printf("ba %d\n",i+i+1);
        }

        if(f1==1 && f2==1 && (abs(ab[ab.size()-1]-ba[0])>=3 || abs(ba[ba.size()-1]-ab[0])>=3) )
        {
            //printf("Got\n");
            flag=1; break;
        }
    }
    if(flag)printf("YES\n");
    else
        printf("NO\n");
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        i=s.size()-1;
        if(s[i-1]=='p' && s[i]=='o')
            printf("FILIPINO\n");
        else if((s[i-3]=='d' && s[i-2]=='e' && s[i-1]=='s' && s[i]=='u') || (s[i-3]=='m' && s[i-2]=='a' && s[i-1]=='s' && s[i]=='u'))
            printf("JAPANESE\n");
        else if((s[i-4]=='m' && s[i-3]=='n' && s[i-2]=='i' && s[i-1]=='d'  && s[i]=='a') )
            printf("KOREAN\n");
    }
}

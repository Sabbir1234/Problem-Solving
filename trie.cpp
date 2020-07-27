#include<bits/stdc++.h>
using namespace std;
vector<string>v;
vector<string>:: iterator it;
int id=0;
int trie[10009][20],flag[10009];
void add(string s)
{
    int i,cur=0,d;
    for(i=0;i<s.size();i++)
        {d=s[i]-'0';
        if(trie[cur][d]==0)trie[cur][d]=++id;
        cur=trie[cur][d];
        flag[cur]++;}
}
int query(string s)
{
    int cur=0,d,i,cnt=0;
    for(i=0;i<s.size();i++)
    {
        d=s[i]-'0';
        cur=trie[cur][d];
        cnt++;
        if(flag[cur]==1)
        {break;}

    }
    return cnt;

}
int main()
{
    //freopen("cons.txt","w",stdout);
    string s;
    int t,n,i,j=1,x;
    long long sum=0;
    scanf("%d",&t);
    while(t--)
    {
        memset(trie,0,sizeof(trie));
        memset(flag,0,sizeof(flag));
        id=0,x=1,sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            cin>>s;
            v.push_back(s);
            add(s);
        }
        //it=v.begin();
        for(it=v.begin();it!=v.end();it++)
        {
            sum+=query(*it);
        }
        //printf("Case %d: ",j++);
        printf("%lld\n",sum);
        v.clear();

    }
}

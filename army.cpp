#include<bits/stdc++.h>
using namespace std;
vector<int>v[100009];
vector<int>:: iterator it1,it2;
void cut(int l,int flag)
{
    int i;
    for(i=0,it1=v[l].begin();i<v[l].size();i++,it1++)
    {
        if(v[l][i]==flag)
           v[l].erase(it1);
    }
    for(i=0,it2=v[flag].begin();i<v[flag].size();i++,it2++)
    {
        if(v[flag][i]==l)
          v[flag].erase(it2);
    }
}
void build(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if((i+1)<=n)
     {v[i].push_back(i+1); v[i+1].push_back(i);}



    }
}
void cl()
{
    int i;
    for(i=0;i<=100009;i++)
    {
        v[i].clear();
    }
}
int main()
{
    freopen("buddy.txt","w",stdout);
    int s,b,i,j,l,r,flag,tag,k=1;
    while(scanf("%d %d",&s,&b)==2)
    {
        //printf("Case %d: ",k++);
        if(s==0 && b==0)
            break;
           build(s);
        for(i=1;i<=b;i++)
        {

            cin>>l>>r;
            flag=0;
            tag=0;
            for(j=0;j<v[l].size();j++)
            {
                if(v[l][j]<l)
                {
                    flag=v[l][j];
                    cut(l,flag);
                }
            }
            for(j=0;j<v[r].size();j++)
            {
                if(v[r][j]>r)
                {
                    tag=v[r][j];
                    cut(r,tag);
                }
            }
            if(flag)
          printf("%d ",flag);

            else
                printf("* ");
            if(tag)
                printf("%d\n",tag);
            else
                printf("*\n");
            if(flag!=0 && tag!=0)
            {
            v[flag].push_back(tag);
            v[tag].push_back(flag);
            }
            v[l].clear();
            v[r].clear();

        }
        printf("-\n");
        cl();
    }
}

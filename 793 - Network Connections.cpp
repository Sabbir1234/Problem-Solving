#include<bits/stdc++.h>
using namespace std;
int parent[500000];
int root(int x)
{
    if(parent[x]==x)
        return x;
    else
    {
        parent[x]=root(parent[x]);
        return parent[x];
    }
}
void un(int a,int b)
{
    a=root(a);
    b=root(b);
    parent[a]=parent[b];

}
void init(int n)
{
    for(int i=0;i<=n;i++)
        parent[i]=i;
}
int main()
{
    int t,i,a,b,n;
    char s[10000];
    char ch;
    cin>>t;
    cout<<endl;
    while(t--)
    {
        int suc=0,fail=0;
        scanf("%d\n",&n);
        cout<<endl;
        getchar();
        init(n);
        while(fgets(s,sizeof(s),stdin))
        {
            if(s[0]=='\n') break;
             sscanf(s,"%c%d%d",&ch,&a,&b);
            if(ch=='c')
            {
                if(root(a)!=root(b))
                un(a,b);
            }
            if(ch=='q')
            {
               if(root(a)==root(b))
               {
                   suc++;
               }
               else
                fail++;
            }

        }
        printf("%d,%d\n",suc,fail);
        if(t>0)
            printf("\n");

    }
}

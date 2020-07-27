#include<bits/stdc++.h>
using namespace std;
int x,y,xx,yy;
int extend(int a,int b,int x,int y)
{
    if(b==0)
    {
        x=1;y=0;return a;
    }
    int x1,y1;
    int d=extend(b,a%b,x1,y1);
    xx=y1;
    yy=x1-(a/b)*y1;
}
bool find_any_solution(int a,int b,int c,int &x,int &y,int &g)
{
    g=extend(abs(a),abs(b),x,y);
    if(c%g)
        return false;
    xx*=(c/g);yy*=(c/g);
    if(a<0)xx=-xx;
    if(b<0)yy=-yy;
    return true;
}
int main()
{
   int a,b,c,x,y,g;
   cin>>a>>b>>c>>x>>y;
   bool res=find_any_solution(a,b,c,x,y,g);
   if(res)
    printf("YES\n");
   else
    printf("NO\n");
}

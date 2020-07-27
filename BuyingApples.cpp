#include<bits/stdc++.h>
using namespace std;
int x;
struct node{
   int w , price;
   float PricePerWeight;
};
node p[101];

bool compare(node a,node b)
{
    return a.PricePerWeight<b.PricePerWeight;
}
int call(int i,int weight,int k)
{
      if(i==k)
      {
          if(weight==k){
           x=weight;
          return 1;
        }
        else return 0;
      }


    int ret1=0,ret2=0;
    if(weight+p[i].w<=k) ret1=call(i,weight+p[i].w,k);
       ret2=call(i+1,weight,k);
    return ret1|ret2;

}
void cl()
{
    for(int i=0;i<=100;i++)
    {
        p[i].price=0;
        p[i].w=0;
        p[i].PricePerWeight=0.0;
    }
}
int main()
{
    int t,n,k,i,j,cn=0,a,ans;

    cin>>t;
    while(t--)
    {
        cin>>n>>k; cn=0; cl();
        for(i=0,j=0;i<k;i++)
        {
            cin>>a;
            if(a>0)
            {
                cn++;p[j].w=i+1; p[j].price=a;p[j].PricePerWeight= (a*1.00)/((i+1)*1.00);
                j++;
            }
        }
         x=0;
        sort(p,p+j,compare);
        ans=call(0,0,j);
        if(ans)
            printf("%d\n",x);
        else
            printf("-1\n");
    }
}

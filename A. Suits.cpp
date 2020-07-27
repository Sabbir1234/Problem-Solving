#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tie,scurve,vest,jacket,first,second,s_cost,f_cost,sum=0,x,y;
    cin>>tie>>scurve>>vest>>jacket>>first>>second;
    s_cost=min(jacket,min(scurve,vest));
    f_cost=min(tie,jacket);
    if(first>=second)
    {
        x=jacket-f_cost;
        f_cost=f_cost*first;
        sum=f_cost + second*min(x,min(scurve,vest));
         printf("%d\n",sum);
    }
    else
    {
        y=jacket-s_cost;
        s_cost=s_cost*second;
        sum=s_cost + first*min(y,tie);
         printf("%d\n",sum);

    }




}

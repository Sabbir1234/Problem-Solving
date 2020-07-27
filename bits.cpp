#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int fre[1000]={0};
int ar[1000]={0};
/*void as()
{
    for(int i=0;i<1000;i++)
        fre[i]=0;
}*/
int main()
{
    int t,n,i,a,j,k,ma,in=0,me;
    cin>>t;
    while(t--)
    {
        memset(fre,0,sizeof(fre));
        memset(ar,0,sizeof(ar));
        k=-1000;
        ma=-1000;
        me=-1000;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            j=0;

            while((1<<j)<=a)
            {
                if(a & (1<<j))
                {
                    fre[j]=fre[j]+1;
                    //me=max(fre[j],me);
                    k=max(j,k);
                    if(me<=fre[j] && ar[me]>j)
                    {
                        me=fre[j];
                        ar[me]=j;
                        in=j;
                    }

                    //ma=max(fre[j],ma);

                }
                j++;

            }
        }
        /*for(i=0;i<=k;i++)
        {
            if(ma<fre[i])
            {
                in=i;
                ma=fre[i];
            }
        }*/
        printf("%d\n",fre[ar[in]]);
        printf("%d\n",in);
    }
}

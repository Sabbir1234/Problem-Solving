#include<bits/stdc++.h>
using namespace std;
int fre[1000]={0};
void as()
{
    for(int i=0;i<1000;i++)
        fre[i]=0;
}
int main()
{
    int t,n,i,a,j,k;
    cin>>t;
    while(t--)
    {
        memset(fre,0,sizeof(fre));
        k=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            j=0;
            as();
            while(a!=0)
            {
                if(a & (1<<j)!=0)
                {
                    fre[j]=fre[j]+1;
                    printf("%d th bit is set\n",j);
                }
                a= a & 1<<j;
                j++;
                k++;
            }
        }
        sort(fre,fre+k);
        printf("k %d\n",k);
        for(i=0;i<k;i++)
        printf("%d\n",fre[i]);
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int id=0,i,k,n;
   char s[100],st[100];
    cin>>s>>k;
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(i+k>=n)
        {
            st[i+k-n]=s[i];
        }
        else
            st[i+k]=s[i];
        //printf("%d %c\n",id,str[i]);
    }
    st[n]='\0';
    printf("%s\n",st);
    //cout<<st<<endl;

}

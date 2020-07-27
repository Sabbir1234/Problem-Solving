#include<bits/stdc++.h>
using namespace std;
bool match(string text,string pattern)
{
    int i,j;
    for(i=0;i<text.size();i++)
    {
        for(j=0;j<pattern.size();j++)
        {
            if(text[i+j]!=pattern[j])
                break;
        }
        if(j==pattern.size())
        return true;
    }


    return false;

}
int main()
{
    string text,pattern;
    cin>>text>>pattern;
    bool res=match(text,pattern);
    if(res)
        printf("Found\n");
    else
        printf("Not found\n");

}

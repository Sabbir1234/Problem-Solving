#include <string>
#include <sstream>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include <string>
using namespace std;
int main()
{
    long long a,b;
    int c,e,f,g=-1,i,flag=0;
    double d;
    scanf("%lld %lld %d",&a,&b,&c);
    d=(double)a/(double)b;
    std::string pi = std::to_string(d);
    for(i=2;i<20;i++)
    {
        if(pi[i]==c)
        {
           g=i+1;
           flag=1;
           break;
        }
    }
    if(flag==1)
        printf("%d\n",g);
    else
        printf("%d\n",g);



}

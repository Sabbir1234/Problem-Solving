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
#include<string>
using namespace std;
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double d=(double)a/(double)b;
    string pi =  to_string(d);
    printf("%s\n",pi);
}

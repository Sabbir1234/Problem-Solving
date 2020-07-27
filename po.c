#include <stdio.h>
double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}

int main()
{
    double a,b,c,sum;
    a=2.6;
    b=9.3;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}

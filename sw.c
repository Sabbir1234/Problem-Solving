#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,r,root1,root2;
    scanf("%f %f %f",&a,&b,&c);
    r=b*b-4*a*c;
    switch(r>0)
    {
    case 1:
        root1= (-b+sqrt(r))/2*a;
        root2= (-b-sqrt(r))/2*a;
        printf("%f \n%f\n",root1,root2);
        break;
    case 0:
        printf("%f\n",-b/2*a);
        break;
    }
}

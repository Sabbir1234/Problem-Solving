#include<stdio.h>
#define PI 3.14159265358979323846
int main()
{
    int w,h;
    while((scanf("%d %d",&w,&h))==2)
    {
        if(w==0 && h==0)
            break;
        else
        {
            printf("%.3lf\n",PI*(w/2)*(w/2)*w);
        }
    }
return 0;

}

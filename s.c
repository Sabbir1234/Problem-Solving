#include<stdio.h>
int main()
{
    int y=0;
    float a,i;
    scanf("%f %f",&a,&i);
    while(y<=12)
    {
        printf("year %d  Taka %f\n",y,a+a*i);
        y++;
        a=a+a*i;
    }

}

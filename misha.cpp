#include<stdio.h>
#include<string.h>
bool test(int c)
{
    int sum=0;
   while(c!=0)
   {
       sum+=c%10;
       c=c/10;
   }
   if(sum==10)
    return true;
   return false;
}
int main()
{
    int k,a=1;
    int c=19;
    scanf("%d",&k);
    while(a<=k)
    {
        if(test(c))
        {
            a++;
            c+=9;
        }
        else
            c+=9;
    }
    printf("%d\n",c-9);


}

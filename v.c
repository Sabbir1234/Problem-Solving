#include<stdio.h>
main()
{
   int year=0,period=10;
   float amount=5000,value,in=0.11;
   while(year<=period)
   {
       printf("year %d  amount %.2f\n",year,amount);
       amount=amount+amount*in;
       year++;
   }




}

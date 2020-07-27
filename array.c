#include<stdio.h>
int main()
{
   int i;
   int t[20]={87,56,93,45,78,96,68,75,89,93,65,90,80,67,54,38,34,58,89,54};
   int count=0,marks;
   for(marks=50;marks<=100;marks++)
   {
       for(i=0;i<20;i++)
       {
           if(t[i]==marks)
           {
               count=count+1;
           }
       }
       printf("%d peyeche   %d jon\n",marks,count);
   }

    return 0;
}

#include<stdio.h>
int main()
{
    int t[10],i;
   int count=0,marks;
    for(i=0;i<10;i++)
    {
        scanf("%d",&t[i]);
    }

    for(marks=50;marks<=100;marks++)
    {
        count=0;
        for(i=0;i<10;i++)
        {
            if(t[i]==marks)
            {
                count=count+1;
            }
        }
        printf("%d had been got by %d students\n",marks,count);

    }




    return 0;
}

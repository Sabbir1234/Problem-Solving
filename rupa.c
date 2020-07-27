#include<stdio.h>
int main()
{
   int t,i;
   char a[100],d;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {

       scanf("%s %c",a,&d);
       if(a[0]=='F')
       {
           if(d<'13')
            printf("Case %d: Pohela Falgun\n",i);
           else if(d<'14')
            printf("Case %d: Valentine's Day\n",i);
           else if(d<'21')
            printf("Case %d: International Mother Language Day\n",i);
           else
            printf("Case %d: International Women's Day\n",i);
       }
       else if(a[0]=='M' && a[2]=='r')
       {
           if(d<'8')
            printf("Case %d: International Women's Day\n",i);
           else if(d<'21')
            printf("Case %d: International Color Day\n",i);
           else if(d<'26')
            printf("Case %d: Bangladesh Independence Day\n",i);
           else
            printf("Case %d: April Fools Day\n",i);
       }
       else if(a[0]=='A' && a[1]=='p')
       {
           if(d<'14')
            printf("Case %d: Pohela Boishakh\n",i);
           else
            printf("Case %d: May Day\n",i);
       }
       else if(a[0]=='M' && a[1]=='a' && a[2]=='y')
        printf("Case %d: Father's Day\n",i);
       else if(a[0]=='J' && a[3]=='e')
       {
           if(d<'19')
            printf("Case %d: Father's Day\n",i);
           else
            printf("Case %d: Mandela Day\n",i);
       }
       else if(a[0]=='J' && a[2]=='l')
       {
           if(d<'18')
            printf("Case %d: Mandela Day\n",i);
           else
            printf("Case %d: World Mosquito Day\n",i);
       }
       else if(a[0]=='A' && a[1]=='u')
       {
           if(d<'20')
            printf("Case %d: World Mosquito Day\n",i);
           else
            printf("Case %d: Halloween\n",i);
       }
       else if(a[0]=='O')
       {
           if(d<'31')
            printf("Case %d: Halloween\n",i);
           else
            printf("Case %d: World Toilet Day\n",i);
       }
       else if(a[0]=='N')
       {
           if(d<'19')
            printf("Case %d: World Toilet Day\n",i);
           else
            printf("Case %d: Human Rights Day\n",i);
       }
       else if(a[0]=='D')
       {
          if(d<'10')
            printf("Case %d: Human Rights Day\n",i);
          else if(d<'16')
            printf("Case %d: Victory Day of Bangladesh\n",i);
          else if(d<'25')
            printf("Case %d: Christmas Day\n",i);
          else
            printf("Case %d: Pohela Falgun\n",i);
       }
       else
        printf("Case %d: Pohela Falgun\n",i);

   }
    return 0;
}

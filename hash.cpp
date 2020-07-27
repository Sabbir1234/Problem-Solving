#include<stdio.h>
char s[6]="v<^>";
int main()
{
    int n,i,c,d;
     char a,b;
     scanf("%c %c",&a,&b);
     scanf("%d",&n);
     for(i=0;i<4;i++)
     {
         if(a==s[i])
         {
             c=i+1;
         }
         else if(b==s[i])
            d=i+1;
     }
     if(c>d)
     {
         if((n%(c-d)==0 && (c-d)!=1) || (c-d)==n)
            printf("ccw\n");
         else if(n%((4-c)+(d-1)+1)==0)
            printf("cw\n");
         else
            printf("undefined\n");
     }
     else
     {
         if((n%(d-c)==0 && (d-c)!=1) || (d-c)==n)
            printf("cw\n");
         else if((n%((4-d)+(c-1)+1)==0 && ((4-d)+(c-1)+1)!=1)|| ((4-d)+(c-1)+1)==n)
            printf("ccw\n");
         else
            printf("undefined\n");
     }

    return 0;
}

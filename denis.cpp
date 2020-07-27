#include<stdio.h>
#include<string.h>
char s[100006];
long long a[30]={0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393};
bool check(long long i)
{
    int j;
    for(j=0;j<30;j++)
    {
        if(a[j]==i)
         return true;
         else if(a[j]>i)
           return false;
    }
}
int main()
{
    long long l,i,barca,real,k=1;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        barca=0,real=0;
        scanf("%s",s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
           if(check(i))
            printf("true\n");
            //continue;
            else if(s[i]=='B')
                barca++;
            else
                real++;
        }
        if(barca>real)
            printf("Case #%lld: Aaj Kemon Bodh Korcho\n",k++);
        else if(barca<real)
            printf("Case #%lld: Hala Madrid\n",k++);
        else
        {
           printf("Case #%lld: Meh:\\\n",k++);

        }

    }
    return 0;
}

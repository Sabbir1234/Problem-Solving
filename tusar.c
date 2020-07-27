#include<stdio.h>
 long long pk,qd,am,no,a,b,nu,pk1,qd1,am1,i=1;
main()
{
while((scanf("%lld %lld",&no,&nu))==2)
    {
        if(no==0 && nu==0)
            break;
        int c=0,c1=0;
        for(pk=2; pk<=1000; pk++)
        {
            am=0;
            for(qd=2; qd<=pk/2; qd++)
            {
                if(pk%qd==0)
                {
                    am=1;
                    break;
                }
            }
            if(am==0)
                c++;
            if(c==no)
            {
                a=pk;
                break;
            }
        }
        for(pk1=2; pk1<=1000; pk1++)
        {
            am1=0;
            for(qd1=2; qd1<=pk1/2; qd1++)
            {
                if(pk1%qd1==0)
                {
                    am1=1;
                    break;
                }
            }
            if(am1==0)
                c1++;
            if(c1==nu)
            {
                b=pk1;
                break;
            }
        }

        if((a+b)%2==0)
            printf("Case %lld: Even.\n",i++);
        else
            printf("Case %lld: Odd.\n",i++);
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int n,b,h,w,a[100],z[100],i,j,k,p,m,l;
    while((scanf("%d %d %d %d",&n,&b,&h,&w))==4)
    {
        int cnt=0,l=0;
        for(i=1;i<=h;i++)
        {
            scanf("%d",&p);
            for(j=0;j<w;j++)
            {

                scanf("%d",&a[j]);
                if(a[j]>=n && (a[j]*p)<=b)
                {
                    z[l]=a[j]*p;
                    l++;
                }
            }

        }
        for(k=0;k<l-1;k++)
        for(m=k+1;m<l;m++)
        {
            if(z[m]<z[k])
            {
                int temp=z[m];
                z[m]=z[k];
                z[k]=temp;
            }
        }
        if(l==0)
            printf("stay home\n");
        else
        printf("%d\n",z[0]);

    }
    return 0;
}

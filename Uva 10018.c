
#include<stdio.h>
int main()
{
    long long int a,t,sum;
    int i,j,r,count;
    scanf("%d",&j);
    for(i=1; i<=j; i++)
    {
        scanf("%lld",&a);
        count=0;
iterator:
        t=a;
        sum=0;
        while(t!=0)
        {
            r=t%10;
            sum=sum*10 + r;
            t=t/10;
        }
        a=a+sum;
        t=a;
        sum=0;
        while(t!=0)
        {
            r=t%10;
            sum=sum*10 + r;
            t=t/10;
        }
        if(a!=sum)
        {
            count++;
            goto iterator;
        }
        else
        {
            count++;
            printf("%d %lld\n",count,a);
        }
    }
    return 0;
}

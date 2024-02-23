
#include<stdio.h>
int main()
{
    long long int a;
    int r,sum;
    while(scanf("%llu",&a)==1 && a)
    {
iterator:
        sum=0;
        while(a!=0)
        {
            r=a%10;
            sum=sum+r;
            a=a/10;
        }
        if(sum==0||sum==1||sum==2||sum==3||sum==4||sum==5||sum==6||sum==7||sum==8||sum==9)
        {
            printf("%u\n",sum);
        }
        else
        {
            a=sum;
            goto iterator;
        }
    }
    return 0;
}

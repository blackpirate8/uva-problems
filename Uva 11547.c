
#include<stdio.h>
int main()
{
    int a,b,i,r;
    scanf("%d",&a);
    while(a--)
    {
        scanf("%d",&b);
        b=(((((b*567)/9)+7492)*235)/47)-498;
        i=1;
        while(i<=2)
        {
            r=b%10;
            b=b/10;
            i++;
        }
        if(r>0)
            printf("%d\n",r);
        else
            printf("%d\n",(r*(-1)));
        }
    return 0;
}

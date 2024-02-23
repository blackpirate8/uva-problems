#include<stdio.h>
int main()
{
    unsigned long long int a,b;
    int carryCount,carry;
    while(scanf("%llu %llu", &a, &b) != EOF)
    {
        if (a==0 && b==0)
        {
            break;
        }
        carryCount=0;
        carry=0;
        while (a>0 || b>0)
        {
            carry=((a%10)+(b%10)+carry)/10;
            a=a/10;
            b=b/10;
            carryCount=carryCount+carry;
        }
        if(carryCount==0)
        {
            printf("No carry operation.\n");
        }
        else
        {
            printf("%d carry operation%s.\n", carryCount, (carryCount>1)?"s":"");
        }
    }
    return 0;
}


#include<stdio.h>
int main()
{
    int x,a,b,speed,count=0;
    scanf("%d",&x);
    while(x--)
    {
        scanf("%d",&a);
        speed=0;
        while(a--)
        {
            scanf("%d",&b);
            if(speed<b)
            speed=b;
        }
        printf("Case %d: %d\n",++count,speed);
    }
    return 0;
}

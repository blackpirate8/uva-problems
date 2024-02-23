
#include<stdio.h>
int main()
{
    int T,x,y,i,j,sum;
    scanf("%d", &T);
    for(i=1;i<=T;i++)
    {
        scanf("%d\n%d", &x, &y);
        sum=0;
        for(j=x;j<=y;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}

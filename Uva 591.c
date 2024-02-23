#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,height,n[50],sum,move=0,count=0;
iterator:
    while(scanf("%d",&b)==1 && b)
    {
        for(a=0; a<b; a++)
        {
            scanf("%d",&n[a]);
        }
        sum=0;
        for(a=0; a<b; a++)
        {
            sum=sum+n[a];
        }
        height=0;
        height=sum/b;
        move=0;
        for(a=0; a<b; a++)
        {
            if(n[a]>height)
            {
                move=move+(n[a]-height);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++count,move);
    }
    if(b)
        goto iterator;
    return 0;
}

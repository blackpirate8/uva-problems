
#include<stdio.h>
int func(int u,int v)
{
    int x,temperature,maximum=0,count=1;
    if(u>v)
    {
        temperature=u;
        u=v;
        v=temperature;
    }
    while(u<=v)
    {
        x=u;
        while(x!=1)
        {
            if(x%2==0)
                x=x/2;
            else
                x=x*3+1;
            count++;
            if(x==1)
                break;
        }
        if(count>maximum)
            maximum=count;
        count=1;
        u++;
    }
    return maximum;
}
int main()
{
    int i,j,result;
    while(scanf("%d%d",&i,&j)==2)
    {
        result=func(i,j);
        printf("%d %d %d\n",i,j,result);
    }
    return 0;
}

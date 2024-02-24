#include<stdio.h>
int main()
{
    int x,y,i,j,k,count=0;
    scanf("%d",&y);
    for(x=1;x<=y;x++)
    {
        scanf("%d%d%d",&i,&j,&k);
        if((i<j && i>k)||(i<k && i>j))
        {
            count++;
            printf("Case %d: %d\n",count,i);
        }
        else if((j<i && j>k)||(j<k && j>i))
        {
            count++;
            printf("Case %d: %d\n",count,j);
        }
        else
        {
            count++;
            printf("Case %d: %d\n",count,k);
        }
    }
    return 0;
}

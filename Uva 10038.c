
#include<stdio.h>
#include<string.h>
int main()
{
    int x,y,z,temp,count=0;
    while(scanf("%d",&z)==1)
    {
        int a[z],b[z-1];
        for(x=0; x<z; x++)
        {
            scanf("%d",&a[x]);
        }
        for(x=0,y=1; x<z,y<z; x++,y++)
        {
            if(a[x]>a[x])
                b[x]=a[x]-a[y];
            else
                b[x]=a[y]-a[x];
        }
        for(x=0; x<z-1; x++)
        {
            for(y=x+1; y<z-1; y++)
            {
                if(b[x]>b[y])
                {
                    temp=b[x];
                    b[x]=b[y];
                    b[y]=temp;
                }
            }
        }
        for(x=0; x<z-1; x++)
        {
            if(b[x] != (x+1))
                count++;
        }
        if(count==0)
            printf("Jolly\n");
        else
        {
            printf("Not jolly\n");
            count=0;
        }
    }
    return 0;
}

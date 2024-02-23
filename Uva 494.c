
#include<stdio.h>
#include<string.h>
int main()
{
    int x,start,count=0;
    char a[100000];
    while(gets(a))
    {
        for(x=0; a[x]!='\0'; x++)
        {
            if((a[x]>='a' && a[x]<='z') || (a[x]>='A' && a[x]<='Z'))
            {
                start=1;
            }
            else
            {
                if(start)
                {
                    count++;
                    start=0;
                }
            }
        }
        printf("%d\n",count);
        count=0;
    }

    return 0;
}

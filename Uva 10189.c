
#include <stdio.h>
int main()
{
    char a[101][101];
    int b[101][101];
    int c,d,x,y,z=1;
    while (scanf("%d %d",&c,&d)!=EOF)
    {
        getchar();
        if (c==0 && d==0)
        {
            break;
        }
        for (x=1;x<=c;x++)
        {
            for(y=1;y<=d;y++)
            {
                scanf("%c",&a[x][y]);
                b[x][y]=0;
            }
           getchar();
        }

        for (x=1;x<=c;x++)
        {
            for (y=1;y<=d;y++)
            {
                if (a[x][y]=='*')
                {
                    b[x-1][y-1]++;
                    b[x-1][y]++;
                    b[x-1][y+1]++;
                    b[x][y-1]++;
                    b[x][y+1]++;
                    b[x+1][y-1]++;
                    b[x+1][y]++;
                    b[x+1][y+1]++;
                }
            }
        }
        if (z!=1)
            printf("\n");
        printf("Field #%d:\n",z++);
        for (x=1;x<=c;x++)
        {
            for (y=1;y<=d;y++)
            {
                if (a[x][y]=='*')
                printf("*");
                else printf("%d",b[x][y]);
            }
            printf("\n");
        }


    }


    return 0;
}

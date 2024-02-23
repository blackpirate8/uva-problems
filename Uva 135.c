
#include <stdio.h>

int main()
{
    long long int x, y;
    int count, rej;

    while (scanf("%lld %lld", &x, &y) != EOF) {
        if (x == 0 && y == 0)
            break;

        count = 0;
        rej = 0;

        while (x || y) {
            rej = ((x % 10) + (y % 10) + rej) / 10;
            x /= 10;
            y /= 10;
            count += rej;
        }

        if (count == 0) {
            printf("No carry operation.\n");
        }
        else if(count==1) {
            printf("1 carry operation.\n");
        }
        else{
            printf("%d carry operations.\n",count);
        }
    }

    return 0;
}

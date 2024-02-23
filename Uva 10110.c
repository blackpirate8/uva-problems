
#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,x;
    while(1){
        scanf("%lld",&a);
        if(a==0){
            break;
        }
        x=sqrt(a);
        if(a==x*x){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }
    return 0;
}

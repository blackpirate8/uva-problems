
#include<stdio.h>
int main()
{
    int t,a,b[100],i,k,j,count,tem;
    while(scanf("%d",&t)==1){
    for(k=0;k<t;k++){
        scanf("%d",&a);
        for(i=0;i<a;i++){
            count=0;
            tem=0;
            scanf("%d",&b[i]);
        }
        for(i=0;i<a;i++){
            for(j=0;j<a-i-1;j++){
                if(b[j]>b[j+1]){
                    count++;
                    tem=b[j];
                    b[j]=b[j+1];
                    b[j+1]=tem;
                }
            }
        }
        printf("Optimal Train swapping takes %d swaps.\n",count);
    }
    }
    return 0;
}

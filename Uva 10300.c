
#include<stdio.h>
#include<inttypes.h>
int main()
{

   int x,y,z,t,sum,i,j,k;
   while(scanf("%d",&z)==1){
   for(x=0;x<z;x++){
        sum=0;
      scanf("%d",&t);
      for(y=0;y<t;y++){
        scanf("%d%d%d",&i,&j,&k);
        sum=sum+(i*k);
      }
      printf("%d\n",sum);
   }
   }
   return 0;
}

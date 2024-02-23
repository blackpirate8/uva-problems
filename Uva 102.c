
#include<stdio.h>
#define swap(a, b) {int x; x = a, a=b, b = x;}
int main() {
 char s[4] = "BCG";
 int W[6][3] = {{0,1,2},{0,2,1},{1,0,2},{1,2,0},{2,0,1},{2,1,0}};
 int B[3][3], c, d, e;
 while(scanf("%d", &B[0][0]) == 1) {
  for(c = 0; c < 3; c++) {
   for(d = 0; d< 3; d++) {
    if(c+d == 0) continue;
    scanf("%d", &B[c][d]);
   }
   swap(B[c][1], B[c][2]);
  }
  unsigned Minimum = 0xffffffff, idx;
  for(c = 0; c < 6; c++) {
   int tmp = 0;
   for(d = 0; d < 3; d++) {
    for(e = 0; e < 3; e++)
     if(W[c][d] != e)
      tmp += B[d][e];
   }
   if(tmp < Minimum) idx = c, Minimum = tmp;
  }
  printf("%c%c%c %u\n", s[W[idx][0]], s[W[idx][1]], s[W[idx][2]], Minimum);
 }
 return 0;
}

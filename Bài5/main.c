#include <stdio.h>
int main() {
int ktra(int N){
  if(N<=0) return 0;
int S=0;
for(int i=1;i<=N/2;i++)
  if(N%i==0)
    S += i;
if(S==N) return 1;
return 0;
}

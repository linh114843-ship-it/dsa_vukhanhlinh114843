#include <stdio.h>
int ktra(int N){
    if(N<=0) return 0;
    int S=0;
    for(int i=1;i<=N/2;i++){
      if(N%i==0){
        S += i;
      }
    }
    if(S==N) return 1;
    return 0;
    }

int main(){
    int N[] = {6,-9,20,28};
    int n= sizeof(N) / sizeof(N[0]);
    for(int i=0;i<n;i++){
      if(ktra( N[i] )) 
      {
        printf("%d la so hoan hao.\n", N[i] );
      }
      else
      {
      printf("%d khong phai la so hoan hao.\n", N[i]);
      }
    }
  return 0;
  }

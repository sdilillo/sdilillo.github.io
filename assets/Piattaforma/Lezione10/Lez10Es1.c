#include <stdio.h>

int Pot2(int n){
  int ris;
  if (n==1)
    ris=2;
  else
    if (n>=2)
      ris=2*Pot2(n-1);
  return ris;}

int main(){
  int n;
  scanf("%d", &n);
  printf("%d", Pot2(n));
  return 0;
}
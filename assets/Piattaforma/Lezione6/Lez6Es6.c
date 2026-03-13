#include <stdio.h>

int Mult(int A[][3],int n){
  int i=0,j=0,stop=0, ris=-1;
  // j-esima colonna continuo fino a quando trovo multipli
  for (j=0;j<3;j++) {
    while (i<n && !stop){
      if (A[i][j]%3==0)
        i++;
      else
        stop=1;}
    i=0;
    if (!stop)
      ris=j;
    stop=0;
  }
  return ris;
}

int main(){
  int i,j,A[4][3];
  for (i=0;i<4;i++)
    for (j=0;j<3;j++)
      scanf("%d",&A[i][j]);
  printf( "%d", Mult(A,4));
  return 0;}
        
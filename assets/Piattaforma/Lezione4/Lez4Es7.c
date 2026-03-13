#include<stdio.h>

int main(){
  int n, i=0;
  scanf("%d",&n);
  while (n>0){
    for (i=0; i<n; i=i+1)
      printf("*");
    printf("\n");
    n=n-2;}
  return 0;
}
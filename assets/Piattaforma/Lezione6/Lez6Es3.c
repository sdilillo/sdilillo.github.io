#include <stdio.h>

int min_azzera(int v[10]){
  int min=0,i;
  for (i=0; i<10; i++){
    if (v[i]<min)
      {min=v[i];}
    if (i%2==1)
      {v[i]=0;}
    printf("%d\n",v[i]);}
  return min;}

int main(){
  int v[10],i;
  for (i=0; i<10;i++)
    scanf("%d", &v[i]);
  printf("%d",min_azzera(v));
  return 0;}

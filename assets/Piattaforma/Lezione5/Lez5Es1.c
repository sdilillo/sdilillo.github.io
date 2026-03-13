#include <stdio.h>
float media(int a[],int dim){
  int somma=0,i;
  float n,me;
  for (i=0;i<dim;i++){
    if (a[i]*a[dim-1]>0){
      somma=somma+a[i];
      n=n+1;}}
  me=somma/n;
  return me;}

int main(){
  int i=0, v[10];
  for (i=0;i<10;i++)
    {scanf("%d",&v[i]);}
  printf("%.2f\n",media(v,10));
  return 0;
}

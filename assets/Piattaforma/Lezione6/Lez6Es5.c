#include <stdio.h>

int max(int a[3],int b[3]){
  int i,j=0, stop=0, trovato=0;
  i=0;
  while ( i<3 && !trovato){
    j=0;
    stop=0;
    while (j<3 && !stop)
      {if (a[i]<b[j])
          j++;
        else
          stop=1;}
    if (!stop)
      trovato=1;
    else
      i++;
}
  return trovato;
}

int main(){
  int i, v[3],w[3];
  for (i=0;i<3;i++)
    scanf("%d",&v[i]);
  for (i=0;i<3;i++)
    scanf("%d",&w[i]);
  int ris;
  if (max(v,w))
    printf("TRUE");
  else
    printf("FALSE");
}
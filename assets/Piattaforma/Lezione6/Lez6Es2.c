#include <stdio.h>

void swap(int *A, int *B, int *C)
{
  int a,b,c,v[3];
  a=*A;
  b=*B;
  c=*C;
  v[0]=a;
  if (b>v[0]){
    v[0]=b;
    v[1]=a;}
  else v[1]=b;

  if (c<v[1])
    v[2]=c;
  else {
    if (c<v[0]){
      v[2]=v[1];
      v[1]=c;}
    else{
      v[2]=v[1];
      v[1]=v[0];
      v[0]=c;}}

  *A=v[2];
  *B=v[1];
  *C=v[0];
}
  int main()
  { int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    swap(&a,&b,&c);
    printf("%d\n%d\n%d\n ", a,b,c);
    return 0;
}


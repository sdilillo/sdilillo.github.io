#include <stdio.h>

float sum_pow(int n, float x){
  int j,i=0;
  float xn=1,sum=0;
  while (i<=n){
    for(j=i;j>0;j-=1)
      xn=xn*x;
    sum=sum+xn;
    xn=1;
    i=i+1;
  }
  return sum;
}

int main(){
  float sum_pow(int n ,float x );
  int n;
  float x;
  scanf("%d\n %f",&n,&x);
  printf("%.2f\n",sum_pow(n,x));
  return 0;
}




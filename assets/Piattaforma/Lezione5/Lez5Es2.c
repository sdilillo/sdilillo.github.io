#include <stdio.h>
int multipli (int N,int M ){
  int i=1,m=M;
    while (m<=N){
     i+=1;
     printf("%d\n",m);
     m=M*i;}
    return 0 ;
}

int main(){
  int multipli(int N, int M);
  int N,M;
  scanf("%d\n %d",&N,&M);
  multipli(N,M);
  return 0;
}


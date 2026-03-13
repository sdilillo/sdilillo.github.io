#include<stdio.h>

int main(){
  int A[10],i=0;
  for (i=0; i<10;i=i+1)
    scanf("%d",&A[i]);
 
  for (i=0; i<10;i=i+1)
    if (A[i]>=0 && A[i]%2==0)
      printf("%d\n",A[i]);
    else
      if(A[i]<0 && A[i+1]>=0)
        if (i!=9)
        printf("%d\n",A[i]);
  return 0;
}

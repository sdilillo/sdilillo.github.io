#include <stdio.h>

int main(){
  int a[4][3],b[4][3],c[4][3];
  for (int i=0; i<4;i++) // i scorre le righe m[i][j]
    {
      for (int j=0;j<3;j++)
        scanf("%d",&a[i][j]);}

 for (int i=0; i<4;i++) // i scorre le righe m[i][j]
   {
     for (int j=0;j<3;j++)
        scanf("%d",&b[i][j]);}

 for(int i=0;i<4;i++)
   {
     for(int j=0;j<3;j++){
       int n,m;
       n=a[i][j];
       m=b[i][j];
       c[i][j]=n+m;
       printf("%d ", c[i][j]);
     }
     printf("\n");
   }
 return 0;}
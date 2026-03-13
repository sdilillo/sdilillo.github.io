#include <stdio.h>


void  diff_abs(float *a, float *b)
{
  float c=0;
  c=*a-*b;
  *a=c;
  *b=-c;
}



int main()
{

  float a,b;

  scanf("%f %f", &a, &b);
  diff_abs(&a,&b);
  printf("%.2f \n %.2f \n", a, b);
  return 0;
}



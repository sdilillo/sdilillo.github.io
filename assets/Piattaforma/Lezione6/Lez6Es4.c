#include<stdio.h>
typedef enum{false,true} bool;
void primoultimopari(int arr[], int dim, int* primaocc,int* ultimaocc){
  bool primo=false;
  * primaocc=-1;
  *ultimaocc=-1;
  int i=0;
  while(!primo && i<dim)
    {
      if(arr[i]%2==0)
      {
	primo=true;
	*primaocc=i;
	*ultimaocc=i;
      }
      i++;
    }
  if (primo)
    {
      while ( i<dim)
	{
	  if(arr[i]%2==0)
	   * ultimaocc=i;
	  i++;
	}
    }

}

int main(){
  int v[7], i=0;
  for (i=0;i<7;i++)
    scanf("%d",&v[i]);
  int primaocc, ultimaocc;
  primoultimopari(v,7,&primaocc,&ultimaocc);
  printf("%d %d\n",primaocc, ultimaocc);
  return 0;
}

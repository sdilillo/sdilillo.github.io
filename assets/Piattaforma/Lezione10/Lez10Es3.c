
// in questo esercizio ho usato una variabile static, non so se è permesso
#include<stdio.h>
#include<stdlib.h>

static int i=0;
struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecLenght(ListaDiElementi lis){
  if (lis!=NULL)
    {i++;
      if (lis->next!=NULL)
        RecLenght(lis->next);}
}
void Aggiungi( ListaDiElementi *lis, int n)
{
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;}

int main(){
  int n=1;
  ListaDiElementi lista=NULL;
  while (n>=0){
    scanf("%d", &n);
      if (n>=0)
        Aggiungi(&lista,n);}
  RecLenght(lista);
  printf("%d",i);
  return 0;}

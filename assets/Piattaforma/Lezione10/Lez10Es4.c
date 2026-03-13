#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;
}

void Stampa(ListaDiElementi lis){
  if (lis==NULL)
    printf("NULL");
  else {

    printf("%d -> ", lis->info);
    Stampa(lis->next);}}

void EliminaTesta(ListaDiElementi *lis){
  if (*lis!=NULL){
    ListaDiElementi aux=*lis;
    *lis=(*lis)->next;
    free(aux);
  }}

void EliminaValore (ListaDiElementi *lis,int n){
  if (*lis!=NULL)
    {
      if( (*lis)->info%n==0)
	{
	  EliminaTesta(lis);
	  EliminaValore(lis,n);
	}
      else
	EliminaValore( & ((*lis)->next),n);
    }
}
       

int main(){
  ListaDiElementi lis=NULL;
  int n=1,el;
  scanf("%d",&el);
  while(n>=0)
    {
    scanf("%d",&n);
      if (n>=0 )
	Aggiungi(&lis,n);
    }
  EliminaValore(&lis,el);
  Stampa(lis);}

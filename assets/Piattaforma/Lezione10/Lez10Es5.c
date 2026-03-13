#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiEl\
ementi;

void Agg(ListaDiElementi *lis){
  if (*lis!=NULL){
    if ((*lis)->info%2==0){
      ListaDiElementi aux;
      aux=malloc(sizeof(ElementoDiLista));
      aux->info=-1;
      aux->next=*lis;
      *lis=aux;
      Agg(&((*lis)->next->next));}
    else
      Agg(&((*lis)->next));
  }}


void Aggiungi(ListaDiElementi *lis,int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;}

void Stampa(ListaDiElementi lis){
  if (lis==NULL)
    printf("NULL");
  else {
    printf ("%d -> ",lis->info);
    Stampa(lis->next);}}

int main(){
  ListaDiElementi lista=NULL;
  int n=1;
  while ( n>=0){
    scanf("%d", &n);
    if (n>=0)
      Aggiungi(&lista,n);
  }
  Agg(&lista);
  Stampa(lista);
  return 0;}


#include<stdio.h>
#include<stdlib.h>
typedef enum{false,true} boolean;

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecStampaInversa0(ListaDiElementi lista){
  if (lista!=NULL){
    RecStampaInversa0(lista->next);
    printf("%d -> ", lista->info);
  }}
void RecStampaInversa(ListaDiElementi lista){
  RecStampaInversa0(lista);
  printf( "NULL");}

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  *lis=aux;
} 

int main(){
  ListaDiElementi lista=NULL;
  int n=1;
  while (n>=0){
    scanf("%d", &n );
    if (n>=0)
      Aggiungi( &lista,n);}
  RecStampaInversa (lista);
  return 0;}

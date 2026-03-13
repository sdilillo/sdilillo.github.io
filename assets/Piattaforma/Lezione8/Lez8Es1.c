#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;


void testa(ListaDiElementi *p, int v )
{ 
  ListaDiElementi aux;
    
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=v;
  aux->next=*p;
  *p=aux;
 }

void rimuovi(ListaDiElementi *p){
  if (*p!=NULL)
    {*p=(*p)->next;}}

void stampa(ListaDiElementi p){
  if(p!=NULL){
    printf("%d",p->info);
      printf("\n");
    //printf("%d",p->next->info);
      stampa(p->next);}
  

}

int main(){
  int n=10;
  ListaDiElementi lista = NULL;

  while (!(n<0)){
    scanf("%d", &n);
    if(n>0)
      testa(&lista,n);
    if(n==0)
      rimuovi(&lista);
  }
  stampa(lista);
  return 0; }
    





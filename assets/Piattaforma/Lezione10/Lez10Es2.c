#include<stdio.h>
#include<stdlib.h>

struct elemento{
  int info;
  struct elemento * next;
};
typedef struct elemento ElementoDiLista; typedef ElementoDiLista* ListaDiElementi;

void RecStampa(ListaDiElementi lis){
  if (lis==NULL)
    printf("NULL");
  else
    {
      if (lis->next==NULL)
        printf("%d -> NULL", lis->info);
      else{
        printf("%d -> ", lis->info);
        RecStampa(lis->next);
      }}}

void Aggiungi(ListaDiElementi *lis, int n){
  ListaDiElementi aux;
  aux=malloc(sizeof(ElementoDiLista));
  aux->info=n;
  aux->next=*lis;
  
  if (*lis==NULL)
    *lis=aux;
  else{
    *lis=aux;}}
    
 int main(){
  ListaDiElementi lista=NULL;
  int n=1;
  while (n>=0){
    scanf("%d", &n);
    if (n>=0)
      Aggiungi(&lista, n);
  }
  RecStampa(lista);}
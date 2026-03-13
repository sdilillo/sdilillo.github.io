
#include<stdio.h>
#include<stdlib.h>

struct nodoAlberoBinario{
  int label;
  struct nodoAlberoBinario *left;
  struct nodoAlberoBinario *right;
};

typedef struct nodoAlberoBinario NodoAlbero;

typedef NodoAlbero *AlberoBinario;

void Aggiungi( AlberoBinario *bt, int val){
  if((*bt)==NULL){
    AlberoBinario aux;
    aux=malloc(sizeof(NodoAlbero));
    aux->label=val;
    aux->left=NULL;
    aux->right=NULL;
    *bt=aux;}
  else
    {
      if (((*bt)->label)>val)
	Aggiungi(&((*bt)->left),val);
      else
	Aggiungi(&((*bt)->right),val);
    }
}

int max (int a,int b)
{
    int ris=a;
    if(a<b)
        ris=b;
    return ris;
}
int Altezza(AlberoBinario bt)
{
    int ris;
    if (bt==NULL)
        ris=0;
    else
        ris=max(Altezza(bt->left),Altezza(bt->right))+1;
    return ris;
}
int main(){
  int n;
  AlberoBinario bt=NULL;
  scanf("%d", &n);
  for (int i=0; i<n;i++)
    {
      int a ;
      scanf("%d", &a);
      Aggiungi(&bt, a);
    }
    int h;
    h=Altezza(bt);
  printf("%d", h);


  return 0;
}

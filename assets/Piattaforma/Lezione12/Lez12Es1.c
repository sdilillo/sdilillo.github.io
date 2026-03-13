
#include<stdio.h>
#include<stdlib.h>

struct nodoAlberoBinario{
  int label;
  struct nodoAlberoBinario *left;
  struct nodoAlberoBinario *right;
};

typedef struct nodoAlberoBinario NodoAlbero;

typedef enum{false,true} boolean;
typedef NodoAlbero* AlberoBinario;

void Aggiungi ( AlberoBinario *bt, int val){
    if ((*bt)==NULL)
    {
        AlberoBinario aux;
        aux=malloc(sizeof(NodoAlbero));
        aux->label=val;
        aux->left=NULL;
        aux->right=NULL;
        *bt=aux;
    }
    else
    {
        if( (*bt)->label>val)
            Aggiungi(&((*bt)->left),val);
        else
            Aggiungi(&((*bt)->right),val);
    }
}
boolean trova(AlberoBinario bt, int val){
    boolean ris=false;
    if(bt!=NULL)
    ris=(bt->label==val) || trova( bt->left, val) || trova (bt->right, val);
    return ris;
}

int prof (AlberoBinario bt, int val)
{ int ris=0;
    if (bt->label==val)
        ris=0;
    else
    {
        if ((bt->label)>val)
            ris=1+prof(bt->left,val);
        else
            ris=1+prof(bt->right,val);
        
    }
    return ris;
}

int profo(AlberoBinario bt , int val)
{   int ris=-1;
    if(trova(bt,val))
        ris=prof(bt,val);
    return ris;
}

int main(){
    int n,i,a;
    AlberoBinario  bt=NULL;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a);
        Aggiungi(&bt,a);
    }
    int b=1;
    while(b>-1)
    {
        scanf("%d", &b);
        if(b>-1)
        {
            a=profo(bt,b);
            if(a==-1)
                printf("NO\n");
            else
                printf("%d\n", a);
        }
        
    }
}

#include <stdio.h>
struct persona {
  char nome[10];
  struct persona * mamma;
  struct  persona * babbo;
};
typedef struct persona Persona;
void stampa(Persona a){
  int i=0;
  Persona *b;
  b=&a;
  if (b!=NULL){
    for(i=0;i<10;i++)
      printf("%c",a.nome[i]);
    printf("\n");
    if(a.mamma==NULL)
      printf("Sconosciuto");
    else
      {
	for(i=0;i<10;i++)
	  printf("%c",a.mamma->nome[i]);
      }
    if(a.babbo==NULL)
      printf("Sconosciuto");
    else
      {
	for(i=0;i<10;i++)
	  printf("%c",a.babbo->nome[i]);
      }
  }}

int main(){
  int i=0;
  Persona f,m,b;
  for(i=0;i<10;i++)
    scanf("%c",&f.nome[i]);
  for ( i=0;i<10;i++)
    scanf("%c",&m.nome[i]);
  for ( i=0;i<10;i++)
    scanf("%c",&b.nome[i]);
  f.mamma=&m;
  f.babbo=&b;
  m.babbo=NULL;
  m.mamma=NULL;
  b.babbo=NULL;
  b.mamma=NULL;
  stampa(f);
   printf("\n");
  stampa(m);
  printf("\n");
  stampa(b);
  return 0; 
}

#include <stdio.h>

struct gatto {
  int id;
  int eta;
  float peso;
  int cibo;
};

int main(){
  struct gatto v[4];
  int i =0;
  float media=0;
  for (i=0; i<4; i++){
    //printf("id: ");
    scanf("%d", &v[i].id);
    //printf("eta: ");
    scanf("%d", &v[i].eta);
    //printf("peso: ");
    scanf("%f", &v[i].peso);
    //printf("cibo: ");
    scanf("%d", &v[i].cibo);
    media=media+v[i].peso;
  }
  media=media/4;
  for (i=0; i<4; i++){
    if(v[i].eta<4 && v[i].peso> media)
      {printf("%d " ,v[i].id);
        switch (v[i].cibo){
        case 0: printf( "crocchette \n" ); break;
        case 1: printf( "scatolette \n" ); break;
        case 2: printf( "tonno in scatola \n" ); break;}}}
  return 0; }
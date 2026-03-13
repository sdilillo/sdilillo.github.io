#include<stdio.h>
struct data{
    int mese;
    int anno;
};

struct dip {
    int id;
    struct data d;
    int sti;
};

typedef struct dip Dip;

void aumento(int au, Dip *a)  {
    for (int i =0;i<2;i++)
    {
        if( ((a->d).anno <2000) || ( (a->d).anno==2000 && (a->d).mese<5))
        {
            a->sti= a->sti+ (a->sti)*au/100;

        }
        a++;
    }}

int main(){
    Dip v[2], *p=v;
    int i=0;
    int x;
    for (i=0; i<2; i++)
    {
//        printf("ID: ");
        scanf("%d",&v[i].id);
//        printf("MESE: ");
        scanf("%d",&v[i].d.mese);
//        printf("ANNO: ");
        scanf("%d",&v[i].d.anno);
//        printf("STIPENDIO: ");
        scanf("%d",&v[i].sti);
    }
    //printf( "AUMENTO: " );
    scanf("%d", &x);
    aumento( x, p);
    if(v[0].sti>1200)
        printf("%d %d", v[0].id, v[0].sti);
    if(v[1].sti>1200)
{printf("\n");
printf("%d %d",v[1].id, v[1].sti);}
    return 0;
}


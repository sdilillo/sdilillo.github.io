#include<stdio.h>

int main(){
    int v[5], w[5], i=0;
    for (i=0;i<5 ;i=i+1)
        scanf("%d",&v[i]);
    for (i=0;i<5;i=i+1)
        scanf("%d",&w[i]);
    
    printf("[");
    for (i=0; i<4; i=i+1)
        printf("%d,", v[i]);
    printf("%d]\n", v[4]);
    printf("[");
    for (i=0; i<4; i=i+1)
        printf("%d,", w[i]);
    printf("%d]\n", w[4]);
    printf("[");
    for (i=0; i<4; i=i+1)
        printf("%d,", v[i]+w[i]);
    printf("%d]\n", v[4]+w[4]);
    
    return 0 ;
}

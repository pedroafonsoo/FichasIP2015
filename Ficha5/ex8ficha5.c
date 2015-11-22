#include <stdio.h>

int v_int_pos(int n){
    int contador;
    contador=0;

    do{
        n=n/10;
        contador++;
    }while(n>0);

    return contador;
}

void main(){

    int x,n;
    printf("Introduza um valor inteiro \n");
    scanf("%d",&n);
    x=v_int_pos(n);
    printf("Resultado :%d",x);







}

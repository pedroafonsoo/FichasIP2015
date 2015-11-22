#include<stdio.h>

    int cubo(int n){

        int resultado;
        resultado=n*n*n;

        return resultado;

    }



void main(){

    int n,x;
    printf("Introduza um valor inteiro \n");
    scanf("%d",&n);

    x=cubo(n);

    printf("Resultado: %d",x);







}

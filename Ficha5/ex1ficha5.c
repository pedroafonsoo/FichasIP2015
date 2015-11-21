#include<stdio.h>

double quadrado(double n) /*Declaração da nossa function */
{
    double resultado = n*n;
    return resultado;
    //equivalente a return n*n;
}

void main(){

    double n = 5;
    double b = quadrado(n);
    printf("resultado: %lf",b);






}

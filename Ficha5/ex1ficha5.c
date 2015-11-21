#include<stdio.h>

double quadrado(double n) /*Declaração da nossa function */
{
    double resultado = n*n;
    return resultado;
    //equivalente a return n*n;
}

void main(){
    double n,res;
    do{
        printf("Introduza um certo numero \n");  //LEITURA DO NUMERO
        scanf("%lf",&n);

        if(n!=0){
            res = quadrado(n); //CALCULO
            printf("resultado: %lf \n",res); //IMPRIME O RESULTADO
        }
    }while(n!=0);
}

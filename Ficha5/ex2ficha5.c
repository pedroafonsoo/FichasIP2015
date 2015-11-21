#include <stdio.h>

 int n_dentro_limite(int n,int min,int max) //os 3 valores sao passados como argumentos
 {
    if(n>min && n<max){
        return 1;
    }
    else{
        return 0;
    }
 }

void main(){

    int n = 3;
    int min= 0;
    int max=4;
    int resultado= n_dentro_limite(n,min,max); //   A ordem dos argumentos tem que ser igual á da função
    printf("Resultado:%d \n",resultado);


}

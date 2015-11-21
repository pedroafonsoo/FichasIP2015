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
    int n,min,max;
    printf("Introduza um numero \n");
    scanf("%d",&n);
    printf("Introduza o limite minimo \n");
    scanf("%d",&min);
    printf("Introduza o limite maximo\n");
    scanf("%d",&max);
    int resultado= n_dentro_limite(n,min,max); //   A ordem dos argumentos tem que ser igual á da função
    printf("Resultado:%d \n",resultado);


}

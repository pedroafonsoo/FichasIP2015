#include<stdio.h>

int n_limite(char* tipo){

    int n;
    do{
        printf("Introduza o numero inteiro %s\n ",tipo);
        scanf("%d",&n);

        if(n<100 || n>999)
            printf("O numero não está dentro do limite correspondente \n");

    }while(n<100 || n>999);

    return n;
}



void main(){

  int x,X;
  x=n_limite("min");
  X=n_limite("max");

  printf("Resultado: %d : %d",x,X);



}

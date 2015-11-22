#include<stdio.h>

int n_limite(){

    int n;
    do{
        printf("Introduza o numero inteiro \n ");
        scanf("%d",&n);

        if(n<100 || n>999)
            printf("O numero não está dentro do limite correspondente \n");

    }while(n<100 || n>999);

    return n;
}



void main(){

  int x;
  x=n_limite();

  printf("Resultado: %d",x);



}

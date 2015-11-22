#include<stdio.h>

int v_int(int n){

    int contador;
    contador=0;

    do{
       n=n/10;
       contador++;


    }while(n>0);
    return contador;
}

    void main(){
        int n,x;
        printf("Introduza o valor inteiro \n");
        scanf("%d",&n);
        x=v_int(n);
        printf("O resultado é :%d",x);






    }







#include<stdio.h>

int cubo (int n){
    int r;

    r=n*n*n;

    return(r);


}



int n_limi(){
        int numero;
            do{


                if(n<100||n>999){

                    printf("Entao o numero nao esta no limite correspondente \n");
                }



            }while(n<100 ||n >999);


        return numero;

    }



    int verifica(int n){

    int divisao1,resto,aux,divisao2;

    divisao1=n/10;
    resto1=n%10;
    divisao2=aux/10;
    resto2=aux%10;
    if(n==cubo(resto1),cubo(resto2)+cubo(divisao2))
        return 1;
    else
        return 0;

}


void main(){



                printf("Introduza um numero \n");
                scanf("%d",&n);




}

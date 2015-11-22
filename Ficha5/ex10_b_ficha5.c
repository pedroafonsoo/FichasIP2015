#include<stdio.h>

    int n_limi(){
        int n;
            do{

                printf("Introduza um numero \n");
                scanf("%d",&n);
                if(n<100||n>999){

                    printf("Entao o numero nao esta no limite correspondente \n");
                }



            }while(n<100 ||n >999);


        return n;

    }



void main(){

       int x,n;

       x=n_limi();

       printf("Resultado:%d",x);





}

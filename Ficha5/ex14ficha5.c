#include<stdio.h>

int n_divisores(int n){

        int i,ndivisor;

        do{

            if(n%i==0)

                ndivisor=ndivisor+1;
            i++;


        }while(n!=0 || n>0);

    return ndivisor;

}


void main(){

        int n,x;

         printf("Introduza um valor inteiro e positivo \n");
         scanf("%d",&n);


        x=n_divisores(n);

        printf("Resultado: %d",x);




}

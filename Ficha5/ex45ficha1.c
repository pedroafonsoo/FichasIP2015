#include<stdio.h>

 int n_divisores (int n){

    int c,i,x;
    c=0,i=1;

    while(i<=n){

        if(n%i==0){

                c++;
            i++;
        }

        return c;
    }


 }






void main(){

    int n,x;


        do{

        printf("Introduza um numero \n");
        scanf("%d",&n);

        if(n>0){
        x=n_divisores(n);

        if(x==2 || x==1){
            printf("Entao e numero primo \n");

        }

    }while(n>0);







                                                                                        }

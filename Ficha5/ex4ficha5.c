#include <stdio.h>

    void linha(int n){
        int i;

        for(i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }





void main(){


    int n, i;

    printf("Introduza o numero de asteriscos a desenhar \n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        linha(n);
    }

}



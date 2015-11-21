#include <stdio.h>

    void linha(int n){
        int i;

        for(i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }

void main(){
    int n, i,j;

    printf("Introduza o numero de asteriscos a desenhar \n");
    scanf("%d",&n);


    for(i=1;i<=n;i++){ /*for controla numero de linhas; i é o numero da linha; i é tb o comprimento da linha*/
        linha(i);

    }

}


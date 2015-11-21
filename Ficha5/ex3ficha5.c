#include <stdio.h>

    void linha(int n){
        int i;

        for(i=0;i<n;i++){
            printf("*");
        }
        printf("\n");
    }





void main(){

    linha(5);
    linha(20);
    linha(3*2);

    int a=3;
    linha(a);

    printf("Introduza o numero de asteriscos a desenhar \n");
    scanf("%d",&a);

    linha(a);

        int i;
    for( i=0; i<a; i++)
    {
        linha(i+1);
    }
    for(i=a;i>1;i--){
        linha(i-1);

    }

}
